//
// Created by kimdoseong on 2022/07/14.
//

/**
 * Baekjoon #7562 - 나이트의 이동
 * Silver 1
 */

#include <iostream>
#include <vector>
#include <array>
#include <queue>

const std::array<std::pair<int, int>, 8> dist = {{
    {-2, 1},
    {-1, 2},
    {1, 2},
    {2, 1},
    {-2, -1},
    {-1, -2},
    {1, -2},
    {2, -1},
}};

struct Info
{
    int x{0};
    int y{0};
    int count{0};
};

std::queue<Info> q;
std::vector<std::vector<bool>> visited;

int bfs(int I, const std::pair<int, int> &target)
{
    while (!q.empty())
    {
        auto f = q.front();
        q.pop();

        if (f.x == target.first &&
            f.y == target.second)
        {
            return f.count;
        }

        for (const auto &[x, y] : dist)
        {
            auto newX = f.x + x;
            auto newY = f.y + y;

            if (newX < I && newY < I &&
                newX >= 0 && newY >= 0 &&
                visited[newX][newY] == false)
            {
                visited[newX][newY] = true;
                q.push({newX, newY, f.count + 1});
            }
        }
    }

    return 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int I;
        std::cin >> I;
        visited.assign(I, std::vector<bool>(I, false));
        while (!q.empty())
        {
            q.pop();
        }

        std::pair<int, int> current;
        std::cin >> current.first >> current.second;

        std::pair<int, int> target;
        std::cin >> target.first >> target.second;

        q.push({current.first, current.second, 0});
        visited[current.first][current.second] = true;

        std::cout << bfs(I, target) << "\n";
    }

    return 0;
}