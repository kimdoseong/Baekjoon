//
// Created by kimdoseong on 2023/02/01.
//

/**
 * Baekjoon #2579 - 계단 오르기
 * Silver 3
 */

#include <iostream>
#include <vector>

int solution(int n, std::vector<int> &scores) {
    std::vector<int> dp(n);
    dp[0] = scores[0];
    dp[1] = std::max(scores[0], scores[0] + scores[1]);
    dp[2] = std::max(scores[0] + scores[2], scores[1] + scores[2]);

    for (std::vector<int>::size_type i = 3; i < scores.size(); i++) {
        dp[i] = std::max(dp[i - 2] + scores[i], dp[i - 3] + scores[i - 1] + scores[i]);
    }

    return dp.back();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
    }

    std::cout << solution(n, scores);
    return 0;
}