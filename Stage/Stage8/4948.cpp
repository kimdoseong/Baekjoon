//
// Created by kimdoseong on 2022/08/17.
//

/**
 * Baekjoon #4948 - 베르트랑 공준
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

    while (true) {
        int n;
        std::cin >> n;

        if (n == 0)
            break;

        int cnt = 0;

        for (int i = n + 1; i <= (2 * n); i++) {
            if (is_prime(i))
                cnt++;
        }

        std::cout << cnt << "\n";
    }
}