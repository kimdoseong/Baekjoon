//
// Created by doseong on 2023-07-13.
//

/**
 * Baekjoon #2606 - 바이러스
 * Silver 3
 */

#include <iostream>
#include <vector>
#include <queue>

std::vector<bool> visited;
std::queue<int> q;

void bfs(const std::vector<std::vector<int>> &v, int &count)
{
    while (!q.empty())
    {
        auto f = q.front();
        q.pop();
        count++;

        for (auto r : v[f])
        {
            if (visited[r] == false)
            {
                visited[r] = true;
                q.push(r);
            }
        }
    }
}

int main(int, char **)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> v(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        std::cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    // not need to sort
    // start 1
    visited[1] = true;
    q.push(1);

    int count{0};
    bfs(v, count);

    std::cout << count - 1 /*except 1*/;

    return 0;
}
