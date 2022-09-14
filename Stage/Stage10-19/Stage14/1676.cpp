//
// Created by kimdoseong on 2022/09/07.
//

/**
 * Baekjoon #1676 - 팩토리얼 0의 개수
 * Silver 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, count = 0;
    std::cin >> n;

    for (int i = 2; i <= n; i++) {
        if (i % 5 == 0) count++;
        if (i % 25 == 0) count++;
        if (i % 125 == 0) count++;
    }

    std::cout << count;
}