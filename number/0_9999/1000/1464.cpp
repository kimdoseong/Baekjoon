//
// Created by kimdoseong on 2023/02/02.
//

/**
 * Baekjoon #1464 - 1로 만들기
 * Silver 3
 */

#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> dp(n + 1);
    dp[0] = dp[1] = 0;
    dp[2] = dp[3] = 1;

    for(int i = 4; i <= n; i++){
        dp[i] = dp[i - 1] + 1;
        if(i % 2 == 0){
            dp[i] = std::min(dp[i], dp[i / 2] + 1);
        }

        if(i % 3 == 0){
            dp[i] = std::min(dp[i], dp[i / 3] + 1);
        }
    }

    std::cout << dp[n];
    return 0;
}