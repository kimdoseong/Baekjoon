//
// Created by kimdoseong on 2022/08/03.
//

/**
 * Baekjoon #14681 - 사분면 고르기
 * Bronze 5
 */

#include <iostream>

int main() {
    int x, y;

    std::cin >> x >> y;

    if (x > 0) {
        (y > 0) ? std::cout << 1 : std::cout << 4;
    } else {
        (y > 0) ? std::cout << 2 : std::cout << 3;
    }

    return 0;
}