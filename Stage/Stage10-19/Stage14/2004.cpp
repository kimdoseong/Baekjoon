//
// Created by kimdoseong on 2022/09/07.
//

/**
 * Baekjoon #2004 - 조합 0의 개수
 * Silver 2
 */

#include <iostream>
#include <algorithm>

long long func(int n, int x) {
    int num = 0;

    for (long long i = x; n / i >= 1; i *= x) {
        num += n / i;
    }

    return num;
}

int main() {
    int n, m;

    long long two, five;

    std::cin >> n;
    std::cin >> m;

    five = func(n, 5) - func(n - m, 5) - func(m, 5);
    two = func(n, 2) - func(n - m, 2) - func(m, 2);

    std::cout << std::min(five, two) << "\n";

    return 0;
}