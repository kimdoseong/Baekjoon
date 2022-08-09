//
// Created by kimdoseong on 2022/08/09.
//

/**
 * Baekjoon #11654 - 아스키 코드
 * Bronze 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char c;
    std::cin >> c;

    std::cout << static_cast<int>(c) << "\n";
}