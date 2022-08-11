//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #1546 - 평균
 * Bronze 1
 */

#include <iostream>

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cout.tie(0);

    int n;
    int m = -1;
    double sum = 0;

    std::cin >> n;

    double v;
    for (int i = 0; i < n; i++) {
        std::cin >> v;
        sum += v;
        if (m < v) {
            m = v;
        }
    }

    std::cout << ((sum / m) / n) * 100;
    return 0;
}