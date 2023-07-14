//
// Created by kimdoseong on 2022/07/14.
//

/**
 * Baekjoon #7576 - 토마토
 * Gold 5
 */

#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <algorithm>

std::vector<std::vector<int>> map;
std::queue<std::pair<int, int>> q;

const std::array<std::pair<int, int>, 4> dist{
    {
        {-1, 0}, // up
        {1, 0},  // down
        {0, 1},  // right
        {0, -1}, // left
    }};

std::vector<std::pair<int, int>> bfs(const int N, const int M, int &count)
{
    std::vector<std::pair<int, int>> store;
    while (!q.empty())
    {
        auto [curX, curY] = q.front();
        q.pop();

        for (const auto &[x, y] : dist)
        {
            auto nX = curX + x;
            auto nY = curY + y;

            if (nX >= 0 && nY >= 0 &&
                nX < N && nY < M &&
                map[nX][nY] == 0)
            {
                count++;
                map[nX][nY] = 1;
                store.push_back({nX, nY});
            }
        }
    }

    return store;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int M, N;
    std::cin >> M >> N;
    map.resize(N, std::vector<int>(M, 0));

    auto total = N * M;
    int count{0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> map[i][j];
            if (map[i][j] == 1)
            {
                q.push({i, j});
                count++;
            }
            else if (map[i][j] == -1)
            {
                total--;
            }
        }
    }

    int day{0};
    while (!q.empty())
    {
        if (count == total)
        {
            break;
        }

        auto store = bfs(N, M, count);
        std::for_each(store.begin(), store.end(), [](const std::pair<int, int> &p)
                      { q.push(p); });
        day++;
    }

    std::cout << (count == total ? day : -1);
    return 0;
}