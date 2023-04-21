//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2741 - N 찍기
 * Bronze 5
 */

#include <iostream>

int main() {
    std::istream::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << i << "\n";
    }
    return 0;
}