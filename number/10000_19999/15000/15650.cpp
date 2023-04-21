//
// Created by kimdoseong on 2022/09/18.
//

/**
 * Baekjoon #15650 - N과 M(2)
 * Silver 3
 */

#include <iostream>
#include <array>

int n, m;
std::array<int, 8> arr{0,};
std::array<bool, 8> visited = {false,};

void DFS(int pos, int cnt) {
    if (m == cnt) {
        for (int i = 0; i < m; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << '\n';
    }

    for (int i = pos; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = i;
            DFS(i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> n >> m;
    DFS(1, 0);
    return 0;
}