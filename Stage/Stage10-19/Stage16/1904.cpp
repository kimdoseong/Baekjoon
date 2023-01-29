
//
// Created by kimdoseong on 2023/01/27.
//

/**
 * Baekjoon #1904 - 01타일
 * Silver 3
 */

#include <iostream>

#define mod 15746

int main() {

    int n;
    std::cin >> n;
    int dp[n + 1];

    dp[1] = 1 % mod;
    dp[2] = 2 % mod;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % mod;
    }

    std::cout << dp[n] << "\n";
    return 0;
}