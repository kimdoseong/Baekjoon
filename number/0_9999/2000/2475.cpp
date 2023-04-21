//
// Created by doseong on 2022-08-11.
//

/**
 * Baekjoon #2475 - 검증수
 * Bronze 5
 */

#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;

        sum += static_cast<int>(pow(num, 2));
    }

    std::cout << sum % 10 << "\n";
    return 0;
}