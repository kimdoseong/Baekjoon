//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2739 - 구구단
 * Bronze 5
 */

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i < 10; i++) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }

    return 0;
}