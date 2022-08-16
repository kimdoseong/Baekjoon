//
// Created by kimdoseong on 2022/08/16.
//


/**
 * Baekjoon #1978 - 소수찾기
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

    int n;
    std::cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;

        if (is_prime(num))
            cnt++;
    }

    std::cout << cnt;
    return 0;
}