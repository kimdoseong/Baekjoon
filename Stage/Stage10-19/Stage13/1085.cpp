//
// Created by kimdoseong on 2022/08/26.
//

/**
 * Baekjoon #1085 - 직사각형에서 탈출
 * Bronze 3
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    auto vertex = std::min(w - x, h - y);
    auto zero = std::min(x, y);

    std::cout << std::min(vertex, zero) << std::endl;

    return 0;
}