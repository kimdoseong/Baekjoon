//
// Created by kimdoseong on 2022/08/17.
//

/**
 * Baekjoon #1929 - 소수 구하기
 * Silver 3
 */

#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num > 2) {
        if (num % 2 == 0)
            return false;

        auto sqrt_num = static_cast<long>(std::sqrt(static_cast<double>(num)));
        for (long j = 3; j <= sqrt_num; j += 2) {
            if (num % j == 0) {
                return false;
            }
        }
    } else if (num == 1 || num == 0)
        return false;

    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m, n;
    std::cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            std::cout << i << "\n";
        }
    }

    return 0;
}