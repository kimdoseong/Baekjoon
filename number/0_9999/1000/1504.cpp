//
// Created by doseong on 2022-09-05.
//

/**
 * Baekjoon #1504 - 특정한 최단 경로
 * Gold 4
 */

#include <iostream>
#include <queue>
#include <limits>

static const int INF = std::numeric_limits<int>::max();

struct Node
{
    int w_;
    int v_;

    Node() = default;
    Node(int w, int v) : w_(w), v_(v) {}

    bool operator<(const Node &n) const
    {
        return w_ > n.w_;
    }
};

std::vector<std::vector<Node>> graph;
std::vector<int> minCost;

void dijkstra(int size, int start)
{
    minCost.assign(size, INF);
    std::priority_queue<Node> pq;
    pq.push({0, start});

    minCost[start] = 0;
    while (!pq.empty())
    {
        auto t = pq.top();
        pq.pop();

        if (minCost[t.v_] < t.w_)
        {
            continue;
        }

        for (const auto &[tmpW, newV] : graph[t.v_])
        {
            auto newW = t.w_ + tmpW;
            if (minCost[newV] > newW)
            {
                minCost[newV] = newW;
                pq.push({newW, newV});
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    int E;
    std::cin >> N >> E;
    graph.resize(N + 1, std::vector<Node>(0));

    for (int i = 0; i < E; i++)
    {
        int a;
        int b;
        int c;
        std::cin >> a >> b >> c;
        graph[a].push_back({c, b});
        graph[b].push_back({c, a});
    }

    int v1;
    int v2;
    std::cin >> v1 >> v2;

    dijkstra(N + 1, 1);
    auto dt1 = minCost[v1];
    auto dt2 = minCost[v2];

    dijkstra(N + 1, v1);
    auto dt1_dt2 = minCost[v2];
    auto dt1_N = minCost[N];

    dijkstra(N + 1, v2);
    auto dt2_N = minCost[N];

    auto r1{INF};
    auto r2{INF};
    if (dt1 != INF && dt1_dt2 != INF && dt2_N != INF)
    {
        r1 = dt1 + dt1_dt2 + dt2_N;
    }
    if (dt2 != INF && dt1_dt2 != INF && dt1_N != INF)
    {
        r2 = dt2 + dt1_dt2 + dt1_N;
    }

    auto min = std::min(r1, r2);
    min != INF ? std::cout << min : std::cout << "-1";

    return 0;
}