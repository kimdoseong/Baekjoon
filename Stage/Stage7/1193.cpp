//
// Created by kimdoseong on 2022/08/12.
//

/**
 * Baekjoon #1193 - 분수찾기
 * Bronze 1
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int sum = 1;
    int diff = 0;
    int count = 0;
    while (n >= sum) {
        diff = n - sum;
        sum += ++count;
    }

    int denominator, numerator;

    if (count % 2 == 0) {
        denominator = count - diff;
        numerator = 1 + diff;
    } else {
        denominator = 1 + diff;
        numerator = count - diff;
    }

    std::cout << numerator << "/" << denominator;
}