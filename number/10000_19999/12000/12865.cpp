//
// Created by doseong on 2023-04-26.
//

/**
 * Baekjoon #12865 - 평범한 배낭
 * Gold 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    std::vector<std::pair<int, int>> arr;
    for (int i = 1; i <= n; i++) {
        int w, v;
        std::cin >> w >> v;
        arr.emplace_back(w, v);
    }

    std::vector<int> dp(k + 1, 0);
    for (const auto &i: arr) {
        for (int j = k; j >= 1; j--)
            if (i.first <= j) {
                dp[j] = std::max(dp[j], dp[j - i.first] + i.second);
            }
    }

    std::cout << dp[k];
    return 0;
}