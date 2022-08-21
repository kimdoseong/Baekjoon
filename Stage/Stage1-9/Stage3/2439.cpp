//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2439 - 별 찍기 - 2
 * Bronze 4
 */

#include <iostream>

int main() {
    int n = 0;

    std::istream::sync_with_stdio(false);
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            std::cout << " ";

        for (int j = 0; j < i; j++)
            std::cout << "*";

        std::cout << "\n";
    }
    return 0;
}