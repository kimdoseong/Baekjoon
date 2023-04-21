//
// Created by kimdoseong on 2023/01/29.
//

/**
 * Baekjoon #9461 - 파도반 수열
 * Silver 3
 */

#include <iostream>
#include <vector>

int T;

long long solution(int c, std::vector<long long> &dp) {
    for (int i = 5; i < c; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    return dp[c - 1];
}

int main() {
    std::cin >> T;
    std::vector<int> cases(T);

    for (int i = 0; i < T; i++) {
        std::cin >> cases[i];
    }

    // init
    std::vector<long long> dp(101);
    dp[0] = dp[1] = dp[2] = 1;
    dp[3] = dp[4] = 2;

    for (auto c: cases) {
        std::cout << solution(c, dp) << "\n";
    }

    return 0;
}