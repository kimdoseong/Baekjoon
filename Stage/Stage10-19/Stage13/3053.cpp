//
// Created by kimdoseong on 2022/08/28.
//

/**
 * Baekjoon #3053 - 택시 기하학
 * Bronze 3
 */

#include <iostream>
#include <cmath>

#define PI 3.1415926535897932

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int r;
    std::cin >> r;
    std::cout.precision(6);
    std::cout << std::fixed;

    std::cout << std::pow(r, 2) * PI << "\n" << 2 * std::pow(r, 2);
    return 0;
}