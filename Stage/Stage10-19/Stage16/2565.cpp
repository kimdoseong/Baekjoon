//
// Created by kimdoseong on 2023/02/16.
//

/**
 * Baekjoon #2565 - 전깃줄
 * Gold 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

int solution(int n, std::vector<std::pair<int, int>> &arr) {
    std::vector<int> dp(n, 1);

    int result = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if(arr[i].second > arr[j].second){
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        result = std::max(result, dp[i]);
    }

    return n - result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i].first;
        std::cin >> arr[i].second;
    }

    std::sort(arr.begin(), arr.end());

    std::cout << solution(n, arr);

    return 0;
}