//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #10871 - X보다 작은 수
 * Bronze 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, x;
    std::cin >> n >> x;

    int val;
    for (int i = 0; i < n; i++) {
        std::cin >> val;
        if (val < x) {
            std::cout << val << " ";
        }
    }

    return 0;
}