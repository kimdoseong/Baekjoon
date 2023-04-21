//
// Created by kimdoseong on 2022/08/17.
//

/**
 * Baekjoon #2581 - 소수
 * Silver 5
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

    int n, m;
    std::cin >> n >> m;

    int min = 0;
    int sum = 0;

    for (int i = n; i <= m; i++) {
        if (is_prime(i)) {
            sum += i;

            if (!min)
                min = i;
        }
    }


    if (min == 0) {
        std::cout << -1;
        return 0;
    }

    std::cout << sum << "\n";
    std::cout << min;
}