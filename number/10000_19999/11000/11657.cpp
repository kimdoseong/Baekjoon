//
// Created by kimdoseong on 2022/09/18.
//

/**
 * Baekjoon #11657 - 타임머신
 * Glod 4
 */

//https://codingbutterfly.tistory.com/67 << example. N - 1 loop
#include <iostream>
#include <vector>
#include <limits>

static const int INF = std::numeric_limits<int>::max();
std::vector<long long> minCost;

struct Node
{
    int cost_;
    int e_;

    Node() = default;
    Node(int cost, int e) : cost_(cost), e_(e){};
};

std::vector<std::vector<Node>> graph;

void bellman_ford(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < graph.size(); j++)
        {
            if (minCost[j] == INF)
            {
                continue;
            }

            for (const auto &g : graph[j])
            {
                if (minCost[g.e_] > (minCost[j] + g.cost_))
                {
                    if (i == N - 1) // 음의 사이클
                    {
                        std::cout << "-1";
                        return;
                    }

                    minCost[g.e_] = minCost[j] + g.cost_;
                }
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        minCost[i] != INF ? std::cout << minCost[i] << "\n" : std::cout << "-1\n";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    int M;
    std::cin >> N;
    std::cin >> M;

    minCost.assign(N + 1, INF);
    graph.assign(N + 1, std::vector<Node>(0));
    minCost[1] = 0;

    for (int i = 0; i < M; i++)
    {
        int a;
        int b;
        int c;
        std::cin >> a >> b >> c;

        graph[a].push_back({c, b});
    }

    bellman_ford(N);
    return 0;
}