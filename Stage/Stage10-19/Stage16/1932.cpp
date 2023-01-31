//
// Created by kimdoseong on 2023/01/31.
//

/**
 * Baekjoon #1932 - 정수 삼각형
 * Silver 1
 */

#include <iostream>
#include <vector>

int solution(int n, std::vector<std::vector<int>> &triangle) {
    std::vector<std::vector<int>> dp(n, std::vector<int>(500));
    dp[0][0] = triangle[0][0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j] + triangle[i][j];
            } else if (j == i) {
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
            } else {
                dp[i][j] = std::max(dp[i - 1][j - 1] + triangle[i][j], dp[i - 1][j] + triangle[i][j]);
            }
        }
    }

    int max = -1;
    for (auto item: dp[n - 1]) {
        max = std::max(max, item);
    }

    return max;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<std::vector<int>> triangle(n, std::vector<int>(500));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cin >> triangle[i][j];
        }
    }

    std::cout << solution(n, triangle);
    return 0;
}