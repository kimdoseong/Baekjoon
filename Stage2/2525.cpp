//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2525 - 오븐 시계
 * Bronze 3
 */

#include <iostream>

int main() {
    int h, m = 0;
    std::cin >> h >> m;

    int t = 0;
    std::cin >> t;

    m += t;
    std::cout << ((m / 60) + h) % 24 << " " << m % 60;

    return 0;
}