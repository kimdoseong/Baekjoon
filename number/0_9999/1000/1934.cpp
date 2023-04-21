//
// Created by kimdoseong on 2022/09/04.
//

/**
 * Baekjoon #1934 - 최소공배수
 * Bronze 1
 */

#include <iostream>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        std::cin >> a >> b;

       std::cout << std::lcm(a, b) << "\n";
    }

    return 0;
}