//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #10950 - A + B - 3
 * Bronze 5
 */

#include <iostream>

int main() {
    int n;
    int a, b;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }

    return 0;
}