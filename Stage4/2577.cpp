//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #2577 - 숫자의 개수
 * Bronze 2
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    auto num = a * b * c;
    std::array<int, 10> array{};

    while (num > 0) {
        array[num % 10]++;
        num /= 10;
    }

    for (auto n: array) {
        std::cout << n << "\n";
    }
    return 0;
}