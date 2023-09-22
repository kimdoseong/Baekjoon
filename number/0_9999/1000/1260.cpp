//
// Created by kimdoseong on 2023/07/13.
//

/**
 * Baekjoon #1260 - DFS와 BFS
 * Silver 2
 */

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::vector<bool> visited;
std::queue<int> q;

void dfs(const std::vector<std::vector<int>> &g, int V, std::vector<int> &result)
{
    visited[V] = true;
    result.push_back(V);

    for (auto r : g[V])
    {
        if (visited[r] == false)
        {
            dfs(g, r, result);
        }
    }
}

void bfs(const std::vector<std::vector<int>> &g, std::vector<int> &result)
{
    while (!q.empty())
    {
        auto f = q.front();
        result.push_back(f);
        q.pop();

        for (auto r : g[f])
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

    int N, M, V;
    std::cin >> N >> M >> V;

    std::vector<std::vector<int>> g(N + 1);
    visited.resize(N + 1);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        std::cin >> a >> b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    // sort
    for (auto &r : g)
    {
        std::sort(r.begin(), r.end(), std::less<>());
    }

    std::vector<int> result;
    // dfs
    dfs(g, V, result);

    std::for_each(result.begin(), result.end(), [](int r)
                  { std::cout << r << " "; });

    // init
    std::cout << "\n";
    result.clear();
    visited.assign(N + 1, false);

    // bfs
    visited[V] = true;
    q.push(V);
    bfs(g, result);

    std::for_each(result.begin(), result.end(), [](int r)
                  { std::cout << r << " "; });

    return 0;
}
