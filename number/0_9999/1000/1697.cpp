//
// Created by kimdoseong on 2023/07/14.
//

/**
 * Baekjoon #1697 - 숨바꼭질
 * Silver 1
 */

#include <iostream>
#include <array>
#include <queue>
#include <vector>

std::queue<std::pair<int, int>> q;
std::array<bool, 100001> visited{
    false,
};

int bfs(int K)
{
    while (!q.empty())
    {
        auto [n, c] = q.front();
        q.pop();

        if (n == K)
        {
            return c;
        }

        if (n * 2 <= 100000 && n * 2 >= 0 &&
            visited[n * 2] == false)
        {
            q.push({n * 2, c + 1});
            visited[n * 2] = true;
        }

        if (n - 1 <= 100000 && n - 1 >= 0 &&
            visited[n - 1] == false)
        {
            q.push({n - 1, c + 1});
            visited[n - 1] = true;
        }

        if (n + 1 <= 100000 && n + 1 >= 0 &&
            visited[n + 1] == false)
        {
            q.push({n + 1, c + 1});
            visited[n + 1] = true;
        }
    }

    return 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K;
    std::cin >> N >> K;

    q.push({N, 0});
    visited[N] = true;

    std::cout << bfs(K);

    return 0;
}