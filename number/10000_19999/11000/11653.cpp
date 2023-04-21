//
// Created by kimdoseong on 2022/08/17.
//

/**
 * Baekjoon #11653 - 소인수분해
 * Bronze 1
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = 2; n > 1;) {
        if (n % i == 0) {
            std::cout << i << "\n";
            n /= i;
        } else
            i++;
    }

    return 0;
}