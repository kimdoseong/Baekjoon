//
// Created by kimdoseong on 2022/08/11.
//

/**
 * Baekjoon #5622 - 다이얼
 * Bronze 2
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::array<int, 26> arr{3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

    std::string str;
    std::cin >> str;

    int sum = 0;

    for (auto c: str) {
        sum += arr[c - 65];
    }

    std::cout << sum << "\n";
}
