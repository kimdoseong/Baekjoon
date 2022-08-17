//
// Created by kimdoseong on 2022/08/18.
//

/**
 * Baekjoon #10870 - 피보나치의 수 5
 * Bronze 2
 */

#include <iostream>

int fibonacci(int num) {
    if (num <= 1) return num;

    return fibonacci(num - 2) + fibonacci(num - 1);
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num;
    std::cin >> num;

    std::cout << fibonacci(num);
    return 0;
}