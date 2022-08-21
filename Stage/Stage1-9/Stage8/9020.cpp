//
// Created by kimdoseong on 2022/08/17.
//

/**
 * Baekjoon #9020 - 골드바흐의 추측
 * Silver 2
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

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int num;
        std::cin >> num;

        for (int j = num / 2; j >= 2; j--) {
            if (is_prime(j) && is_prime(num - j)) {
                std::cout << j << " " << num - j << '\n';
                break;
            }
        }
    }

    return 0;
}
