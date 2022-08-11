//
// Created by kimdoseong on 2022/08/10.
//

/**
 * Baekjoon #2908 - 상수
 * Bronze 2
 */

#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string a, b;
    std::cin >> a >> b;

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    std::cout << std::max(a, b) << "\n";
}