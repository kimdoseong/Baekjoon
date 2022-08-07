//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2438 - 별 찍기 - 1
 * Bronze 5
 */

#include <iostream>

int main() {
    int n = 0;

    std::istream::sync_with_stdio(false);
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            std::cout << "*";

        std::cout << "\n";
    }
    return 0;
}