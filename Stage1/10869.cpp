//
// Created by doseong on 2022-08-01.
//

/**
 * Baekjoon #10869 - 사칙연산
 * Bronze 5
 */

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl;
    return 0;
}