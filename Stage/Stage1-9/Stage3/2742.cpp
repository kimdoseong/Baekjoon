//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2742 - 기찍 N
 * Bronze 4
 */

#include <iostream>

int main() {
    std::istream::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << n - i << "\n";
    }
    return 0;
}