//
// Created by doseong on 2023-07-13.
//

/**
 * Baekjoon #24445 - 알고리즘 수업 - 너비 우선 탐색 2
 * Silver 2
 */

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::vector<bool> visited{
    false,
};
std::queue<int> Q;

void bfs(const std::vector<int> &E)
{
    for (const auto &v : E)
    {
        if (visited[v] == false)
        {
            visited[v] = true;
            Q.push(v);
        }
    }
}

int main(int, char **)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int N, M, R;
    std::cin >> N >> M >> R;

    visited.resize(N + 1, false);
    std::vector<int> result(N + 1, 0);
    std::vector<std::vector<int>> E(M + 1);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        std::cin >> a >> b;
        E[a].push_back(b);
        E[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        std::sort(E[i].begin(), E[i].end(), std::greater<>());
    }

    visited[R] = true;
    Q.push(R);
    int count = 0;
    while (!Q.empty())
    {
        auto q = Q.front();
        Q.pop();
        result[q] = ++count;
        bfs(E[q]);
    }

    for (int i = 1; i < result.size(); i++)
    {
        std::cout << result[i] << "\n";
    }

    return 0;
}
