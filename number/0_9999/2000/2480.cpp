//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #2480 - 주사위 세개
 * Bronze 4
 */

#include <iostream>
#include <algorithm>

int main() {
    int a, b, c, reword;
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        reword = 10000 + a * 1000;
    } else if (a == b || a == c) {
        reword = 1000 + a * 100;
    } else if (b == c) {
        reword = 1000 + b * 100;
    } else {
        reword = std::max({a, b, c}) * 100;
    }

    std::cout << reword;
    return 0;
}