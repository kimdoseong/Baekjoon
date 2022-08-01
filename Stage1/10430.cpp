//
// Created by kimdoseong on 2022/08/01.
//

/**
 * Baekjoon #10430 - 나머지
 * Bronze 5
 */

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << (a + b) % c << std::endl;
    std::cout << ((a % c) + (b % c)) % c << std::endl;
    std::cout << (a * b) % c << std::endl;
    std::cout << ((a % c) * (b % c)) % c << std::endl;

    return 0;
}