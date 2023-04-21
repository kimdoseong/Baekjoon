//
// Created by kimdoseong on 2022/09/02.
//

/**
 * Baekjoon #2609 - 최대공약수와 최소공배수
 * Bronze 1
 */

#include <iostream>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    std::cin >> a >> b;

    std::cout << std::gcd(a, b) << "\n";
    std::cout << std::lcm(a, b) << "\n";
    return 0;
}