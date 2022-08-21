//
// Created by kimdoseong on 2022/08/18.
//

/**
 * Baekjoon #10872 - 팩토리얼
 * Bronze 5
 */

#include <iostream>

int factorial(int num) {
    if (num <= 1) return 1;

    return num * factorial(num - 1);
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num;
    std::cin >> num;

    std::cout << factorial(num);
    return 0;
}