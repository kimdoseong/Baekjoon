//
// Created by kimdoseong on 2023/01/29.
//

/**
 * Baekjoon #1149 - RGB 거리
 * Silver 1
 */

#include <iostream>
#include <vector>
#include <algorithm>

int solution(int n, std::vector<std::vector<int>> &cost, std::vector<std::vector<int>> &dp) {
    dp[0][0] = cost[0][0];
    dp[0][1] = cost[0][1];
    dp[0][2] = cost[0][2];

    for (std::vector<int>::size_type i = 1; i < cost.size(); i++) {
        for (int j = 0; j < 3; j++) {
            int min;
            if (j == 0) {
                min = std::min(dp[i - 1][1], dp[i - 1][2]);
            } else if (j == 1) {
                min = std::min(dp[i - 1][0], dp[i - 1][2]);
            } else {
                min = std::min(dp[i - 1][0], dp[i - 1][1]);
            }
            dp[i][j] = cost[i][j] + min;
        }
    }

    return std::min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<std::vector<int>> cost(n, std::vector<int>(3));
    std::vector<std::vector<int>> dp(n, std::vector<int>(3));

    for (int i = 0; i < n; i++) {
        std::cin >> cost[i][0];
        std::cin >> cost[i][1];
        std::cin >> cost[i][2];
    }

    std::cout << solution(n, cost, dp);
    return 0;
}