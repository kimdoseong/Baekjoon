//
// Created by doseong on 2023-09-05.
//

/**
 * Baekjoon #1753 - 최단경로
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
    // greater<>
    bool operator<(const Node &n) const
    {
        return w_ > n.w_;
    }
};

std::priority_queue<Node> pq;
std::vector<std::vector<Node>> graph;
std::vector<int> minCost;

void dijkstra()
{
    while (!pq.empty())
    {
        auto t = pq.top();
        pq.pop();

        if (minCost[t.v_] < t.w_)
        {
            continue;
        }

        for (const auto &elem : graph[t.v_])
        {
            auto nextV = elem.v_;
            auto nextW = t.w_ + elem.w_ ;

            if (nextW < minCost[nextV])
            {
                minCost[nextV] = nextW;
                pq.push({nextW, nextV});
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int V;
    int E;
    std::cin >> V >> E;
    graph.assign(V + 1, std::vector<Node>(0));
    minCost.assign(V + 1, INF);

    int start;
    std::cin >> start;

    for (int i = 0; i < E; i++)
    {
        int u;
        int v;
        int w;

        std::cin >> u >> v >> w;
        graph[u].push_back({w, v});
    }

    pq.push({0, start});
    minCost[start] = 0;
    dijkstra();

    for (int i = 1; i < minCost.size(); i++)
    {
        minCost[i] == INF ? std::cout << "INF\n" : std::cout << minCost[i] << "\n";
    }

    return 0;
}