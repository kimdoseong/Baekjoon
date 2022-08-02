//
// Created by kimdoseong on 2022/08/01.
//

/**
 * Baekjoon #2588 - 곱셈
 * Bronze 3
 */

#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    std::cout << a * (b % 10) << std::endl;
    std::cout << a * ((b / 10) % 10) << std::endl;
    std::cout << a * (b / 100) << std::endl;
    std::cout << a * b << std::endl;
}