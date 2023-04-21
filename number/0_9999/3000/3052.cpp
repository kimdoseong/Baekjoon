//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #3052 - 나머지
 * Bronze 2
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);

    std::array<int, 42> array{};

    int count = 0;

    for (int i = 0; i < 10; i++) {
        int n = 0;
        std::cin >> n;
        array[n % 42]++;
    }

    for (int n: array) {
        if (n > 0)
            count++;
    }

    std::cout << count;

    return 0;
}