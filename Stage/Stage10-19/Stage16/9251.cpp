//
// Created by kimdoseong on 2023/02/17.
//

/**
 * Baekjoon #9251 - LCS
 * Gold 5
 */

#include <iostream>
#include <algorithm>

int dp[1001][1001];

int main() {
    std::string a, b;
    std::cin >> a >> b;

    for (int i = 1; i <= b.length(); i++)
        for (int j = 1; j <= a.length(); j++) {
            if (b[i - 1] == a[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
        }
    std::cout << dp[b.length()][a.length()];
}