//
// Created by doseong on 2023-07-13.
//

/**
 * Baekjoon #2606 - 단지번호붙이기
 * Silver 1
 */

#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <algorithm>

std::vector<std::vector<int>> visited{
    false,
};
std::queue<std::pair<int, int>> q{};

const std::array<std::pair<int, int>, 4> move{
    std::make_pair(0, 1),  // up
    std::make_pair(0, -1), //  down
    std::make_pair(-1, 0), // left
    std::make_pair(1, 0)   // right
};

void bfs(const std::vector<std::vector<int>> &map, const int N, std::pair<int, int> pos, int &count)
{
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        visited[x][y] = true;
        count++;

        for (const auto &[mX, mY] : move)
        {
            std::pair<int, int> newPos{pos.first + mX, pos.second + mY};
            if (newPos.first < N && newPos.second < N &&
                newPos.first >= 0 && newPos.second >= 0 &&
                visited[newPos.first][newPos.second] == false &&
                map[newPos.first][newPos.second] == 1)
            {
                q.push({newPos.first, newPos.second});
                bfs(map, N, std::move(newPos), count);
            }
        }
    }
}

int main(int, char **)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;
    std::vector<std::vector<int>> map(N, std::vector<int>(N, 0));
    visited.resize(N, std::vector<int>(N));

    std::vector<std::string> tmp(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            map[i][j] = tmp[i][j] - '0';
        }
    }

    std::pair<int, int> pos{0, 0};
    std::vector<int> count;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            auto x = pos.first + i;
            auto y = pos.second + j;

            if (visited[x][y] == false &&
                map[x][y] == 1)
            {
                int c{0};
                visited[x][y] = true;
                q.push({x, y});

                bfs(map, N, {x, y}, c);
                if (c != 0)
                {
                    count.push_back(c);
                }
            }
        }
    }

    std::cout << count.size() << "\n";
    // sort
    std::sort(count.begin(), count.end(), std::less<int>());
    std::for_each(count.begin(), count.end(), [](int cnt)
                  { std::cout << cnt << "\n"; });

    return 0;
}
