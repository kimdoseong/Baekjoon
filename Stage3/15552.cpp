//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #15552 - 빠른 A + B
 * Bronze 4
 */

#include <iostream>

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int a, b = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
    return 0;
}