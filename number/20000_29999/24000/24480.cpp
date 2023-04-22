//
// Created by kimdoseong on 2023/04/22.
//

/**
 * Baekjoon #24480 - 알고리즘 수업 - 깊이 우선 탐색 2
 * Silver 2
 */

#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> graph[200000];
std::vector<bool> visited(100000);
int cnt{0};

void dfs(int point, std::vector<int> &result) {
    if (visited[point]) {
        return;
    }

    visited[point] = true;
    result[point] = ++cnt;
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

    for (int i = 1; i <= n; i++) {
        std::sort(graph[i].begin(), graph[i].end(), std::greater<>());
    }

    std::vector<int> result(n + 1, 0);
    dfs(start, result);

    for (int i = 1; i <= n; i++) {
        std::cout << result[i] << '\n';
    }

    return 0;
}