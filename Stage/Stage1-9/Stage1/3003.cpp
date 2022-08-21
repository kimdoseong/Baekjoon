//
// Created by doseong on 2022-08-12.
//

/**
 * Baekjoon #3003 - 킹, 퀸, 룩, 비숍, 나이트, 폰
 * Bronze 5
 */

#include <iostream>
#include <array>

int main() {
    std::array<int, 6> arr{1, 1, 2, 2, 2, 8};

    for (const auto &count: arr) {
        int n;
        std::cin >> n;

        std::cout << count - n << " ";
    }

    return 0;
}