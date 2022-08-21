//
// Created by kimdoseong on 2022/08/12.
//

/**
 * Baekjoon #2292 - 벌집
 * Bronze 2
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int sum = 1;
    int count = 1;
    while (sum < n) {
        sum += (6 * count);
        count++;
    }

    std::cout << count;
}