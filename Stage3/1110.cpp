//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #1110 - 더하기 사이클
 * Bronze 1
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    if (n < 10) {
        n = n * 10;
    }

    int val = n;
    int cnt = 0;

    do {
        auto a = val / 10;
        auto b = val % 10;

        val = (b * 10) + (a + b) % 10;
        cnt++;
    } while (n != val);

    std::cout << cnt << "\n";
    return 0;
}