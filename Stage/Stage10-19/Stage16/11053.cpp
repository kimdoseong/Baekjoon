//
// Created by kimdoseong on 2023/02/07.
//

/**
 * Baekjoon #11053 - 가장 긴 증가하는 수열
 * Silver 2
 */

#include <iostream>
#include <vector>

int solution(int n, const std::vector<int> &arr) {
    std::vector<int> dp(n, 1);
    dp[1] = arr[0] < arr[1] ? 2 : 1;

    int answer = 1;
    for (int i = 2; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }

        answer = std::max(answer, dp[i]);
    }

    return answer;
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