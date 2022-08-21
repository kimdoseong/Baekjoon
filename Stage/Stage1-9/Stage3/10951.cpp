//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #10951 - A + B - 4
 * Bronze 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;

    while (std::cin >> a >> b) {
        std::cout << a + b << "\n";
    }

    return 0;
}