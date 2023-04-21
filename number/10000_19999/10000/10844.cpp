//
// Created by kimdoseong on 2023/02/02.
//

/**
 * Baekjoon #10844 - 쉬운 계단 수
 * Silver 1
 */

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(10));
    dp[1][0] = 0;
    for (std::vector<int>::size_type i = 1; i < 10; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1];
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < 10; i++) {
        result = (result + dp[n][i]) % 1000000000;
    }

    std::cout << result % 1000000000;
    return 0;
}