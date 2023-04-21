//
// Created by kimdoseong on 2023/01/26.
//

/**
 * Baekjoon #9184 - 신나는 함수 실행
 * Silver 2
 */

#include <iostream>
#include <array>

std::array<std::array<std::array<int, 21>, 21>, 21> dp;

int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    if (a > 20 || b > 20 || c > 20) {
        return w(20, 20, 20);
    }
    if (dp[a][b][c]) {
        return dp[a][b][c];
    }

    if (a < b && b < c) {
        dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return dp[a][b][c];
    }

    dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return dp[a][b][c];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    while (true) {
        std::cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) {
            break;
        }

        std::cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
    }

    return 0;
}