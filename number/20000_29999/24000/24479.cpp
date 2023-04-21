//
// Created by doseong on 2023-04-21.
//

/**
 * Baekjoon #24479 - 알고리즘 수업 - 깊이 우선 탐색 1
 * Silver 2
 */

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<bool> visited(100000);
std::vector<int> graph[200000];
int cnt{0};

void dfs(int point, std::vector<int> &result) {
    if (visited[point - 1]) {
        return;
    }

    visited[point - 1] = true;
    result[point - 1] = ++cnt;
    for (auto i: graph[point]) {
        dfs(i, result);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m, start;
    std::cin >> n >> m >> start;
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        graph[a].emplace_back(b);
        graph[b].emplace_back(a);
    }

    for (int i = 0; i < n; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    std::vector<int> result(n, 0);
    dfs(start, result);
    std::for_each(result.begin(), result.end(), [](int n) {
        std::cout << n << "\n";
    });

    return 0;
}