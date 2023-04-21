//
// Created by kimdoseong on 2022/08/13.
//

/**
 * Baekjoon #2869 - 달팽이는 올라가고 싶다
 * Silver 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, v;
    std::cin >> a >> b >> v;
    std::cout << (v - b - 1) / (a - b) + 1;

    return 0;
}