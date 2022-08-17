//
// Created by doseong on 2022-08-11.
//

/**
 * Baekjoon #1712 - 손익분기점
 * Bronze 2
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;

    if (b >= c) {
        std::cout << -1;
        return 0;
    }

    std::cout << (a / (c - b)) + 1;
}