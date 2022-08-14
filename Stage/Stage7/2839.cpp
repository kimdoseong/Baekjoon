//
// Created by kimdoseong on 2022/08/13.
//

/**
 * Baekjoon #2839 - 설탕 배달
 * Silver 4
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int bag = n / 5;

    while (bag >= 0) {
        n -= bag * 5;

        if (!n)
            break;

        if (!(n % 3)) {
            bag += n / 3;
            break;
        } else {
            n += bag * 5;
            bag--;
        }
    }

    std::cout << bag;
    return 0;
}