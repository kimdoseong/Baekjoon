//
// Created by kimdoseong on 2023-08-04.
//

/**
 * Baekjoon #16928 - 뱀과 사다리 게임
 * Gold 5
 */

#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <map>

std::array<int, 6> dice{1, 2, 3, 4, 5, 6};
std::map<int, int> ladder;
std::map<int, int> map;
std::queue<std::pair<int, int>> q;

void bfs(std::pair<int, int> pos)
{
    for (const auto &d : dice)
    {
        auto move = pos.first + d;

        if (auto iter = ladder.find(move); iter != ladder.end())
        {
            if (map[iter->second] == 0 ||
                pos.second + 1 < map[iter->second])
            {
                map[iter->second] = pos.second + 1;
                q.push({iter->second, pos.second + 1});
            }
            continue;
        }

        if (move <= 100)
        {
            if (map[move] == 0 ||
                pos.second + 1 < map[move])
            {
                map[move] = pos.second + 1;
                q.push({move, pos.second + 1});
            }
        }
    }
}

int main()
{
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    int M;
    std::cin >> N >> M;

    for (int i = 0; i < N + M; i++)
    {
        int key;
        int value;
        std::cin >> key >> value;
        ladder[key] = value;
    }

    // start
    q.push({1, 0});
    while (!q.empty())
    {
        auto pos = q.front();
        q.pop();

        if (pos.first == 100)
        {
            std::cout << pos.second << "\n";
            break;
        }

        bfs(pos);
    }

    return 0;
}