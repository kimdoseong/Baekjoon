//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #2562 - 최댓값
 * Bronze 3
 */

#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);

    int num = 0;
    std::cin >> num;

    auto max = num;
    auto pos = 1;

    for (int i = 2; i <= 9; i++) {
        std::cin >> num;
        max = std::max(max, num);
        if (num == max) {
            pos = i;
        }
    }

    std::cout << max << "\n";
    std::cout << pos;

    return 0;
}