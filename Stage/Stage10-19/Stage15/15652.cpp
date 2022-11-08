//
// Created by kimdoseong on 2022/09/20.
//

/**
 * Baekjoon #15652 - N과 M(4)
 * Silver 3
 */

#include <iostream>
#include <array>

int n, m;
std::array<int, 8> arr{0,};

void DFS(int num, int pos) {
    if (pos == m) {
        for (int i = 0; i < m; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
        return;
    }

    for (int i = num; i <= n; i++) {
        arr[pos] = i;
        DFS(i, pos + 1);
    }

}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> n >> m;

    DFS(1, 0);
    return 0;
}