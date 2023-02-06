//
// Created by kimdoseong on 2023/02/03.
//

/**
 * Baekjoon #2156 - 포도주 시식
 * Silver 1
 */

#include <iostream>
#include <vector>
#include <algorithm>

int solution(int n, const std::vector<int> &arr) {
    std::vector<int> dp(n);
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = std::max({dp[1], arr[0] + arr[2], arr[1] + arr[2]});

    for (int i = 3; i < n; i++) {
        dp[i] = std::max({dp[i - 1], dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]});
    }

    return dp[n - 1];
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << solution(n, arr);
    return 0;
}