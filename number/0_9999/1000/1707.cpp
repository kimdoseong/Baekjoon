//
// Created by doseong on 2023-08-08.
//

/**
 * Baekjoon #1707 - 이분 그래프
 * Gold 4
 */

#include <iostream>
#include <vector>

void dfs(int pos, const std::vector<std::vector<int>> &graph, std::vector<int> &visited, int color)
{
    for (const auto &g : graph[pos])
    {
        if (visited[g] == 0)
        {
            visited[g] = color;
            dfs(g, graph, visited, color * -1);
        }
    }
}

bool check(const std::vector<std::vector<int>> &graph, const std::vector<int> &visited)
{
    for (int i = 1; i < graph.size(); i++)
    {
        for (auto g : graph[i])
        {
            if (visited[i] == visited[g])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int K;
    std::cin >> K;
    for (int i = 0; i < K; i++)
    {
        int V;
        int E;
        std::cin >> V >> E;

        std::vector<std::vector<int>> graph(V + 1);
        std::vector<int> visited(V + 1, 0);
        for (int j = 0; j < E; j++)
        {
            int a;
            int b;
            std::cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        // init
        for (int k = 1; k < graph.size(); k++)
        {
            if (visited[k] == 0)
            {
                dfs(k, graph, visited, -1);
            }
        }

        check(graph, visited) == true ? std::cout << "YES\n" : std::cout << "NO\n";
    }

    return 0;
}