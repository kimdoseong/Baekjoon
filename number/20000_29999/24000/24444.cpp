//
// Created by doseong on 2023-04-27.
//

/**
 * Baekjoon #24444 - 알고리즘 수업 - 너비 우선 탐색 1
 * Silver 2
 */

#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>

void bfs(std::vector<std::vector<int>> &arr, int r, std::vector<int> &result) {
    std::queue<int> q;
    std::vector<bool> visited(arr.size());
    q.push(r);
    visited[r] = true;

    int cnt{1};
    while (!q.empty()) {
        auto n = q.front();
        q.pop();

        result[n] = cnt++;
        for (int &i: arr[n]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m, r;
    std::cin >> n >> m >> r;
    std::vector<std::vector<int>> arr(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;

        arr[a].emplace_back(b);
        arr[b].emplace_back(a);
    }
    for (int i = 1; i <= n; i++) {
        std::sort(arr[i].begin(), arr[i].end());
    }

    std::vector<int> result(n + 1, 0);
    bfs(arr, r, result);

    for (int i = 1; i <= n; i++) {
        std::cout << result[i] << "\n";
    }
    return 0;
}