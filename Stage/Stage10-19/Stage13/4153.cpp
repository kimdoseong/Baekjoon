//
// Created by kimdoseong on 2022/08/27.
//

/**
 * Baekjoon #4153 - 직각삼각형
 * Bronze 3
 */

#include <iostream>
#include <cmath>
#include <array>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::array<int, 3> point{};
    while (true) {
        std::cin >> point[0] >> point[1] >> point[2];
        if (!(point[0] | point[1] | point[2]))
            break;

        std::sort(point.begin(), point.end());
        if (std::pow(point[2], 2) == std::pow(point[0], 2) + std::pow(point[1], 2)) {
            std::cout << "right" << "\n";
        } else {
            std::cout << "wrong" << "\n";
        }
    }
    return 0;
}