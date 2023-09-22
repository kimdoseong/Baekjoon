//
// Created by kimdoseong on 2023/09/22.
//

/**
 * Baekjoon #9370 - 미확인 도착지
 * Gold 2
 */

#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>

static const int INF = std::numeric_limits<int>::max();

struct Node
{
    int d_; // w
    int b_; // point

    Node() = default;
    Node(int d, int b) : d_(d), b_(b) {}

    bool operator<(const Node &n) const
    {
        return d_ > n.d_;
    }
};

std::vector<std::vector<Node>> graph;

void dijkstra(const int start, std::vector<int> &cost)
{
    std::priority_queue<Node> pq;
    pq.push({0, start});
    cost[start] = 0;

    while (!pq.empty())
    {
        auto t = pq.top();
        pq.pop();

        if (cost[t.b_] == INF)
        {
            continue;
        }

        for (const auto &[d, newB] : graph[t.b_])
        {
            auto newD = t.d_ + d;

            if (newD < cost[newB])
            {
                cost[newB] = newD;
                pq.push({newD, newB});
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;
    for (int k = 0; k < T; k++)
    {
        int n;
        int m;
        int t;
        std::cin >> n >> m >> t;
        graph.assign(n + 1, std::vector<Node>());

        int s;
        int g;
        int h;
        std::cin >> s >> g >> h;

        std::vector<int> costS(n + 1, INF);
        std::vector<int> costG(n + 1, INF);
        std::vector<int> costH(n + 1, INF);
        for (int i = 0; i < m; i++)
        {
            int a;
            int b;
            int d;
            std::cin >> a >> b >> d;

            graph[a].push_back({d, b});
            graph[b].push_back({d, a});
        }

        std::vector<int> target;
        for (int i = 0; i < t; i++)
        {
            int x;
            std::cin >> x;

            target.push_back(x);
        }

        dijkstra(s, costS);
        dijkstra(h, costH);
        dijkstra(g, costG);

        std::sort(target.begin(), target.end());
        for (const auto &t : target)
        {
            if (costS[t] == costS[h] + costH[g] + costG[t])
            {
                std::cout << t << " ";
            }
            else if (costS[t] == costS[g] + costG[h] + costH[t])
            {
                std::cout << t << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}