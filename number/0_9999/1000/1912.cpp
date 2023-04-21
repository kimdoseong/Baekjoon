//
// Created by kimdoseong on 2023/01/29.
//

/**
 * Baekjoon #1912 - 연속합
 * Silver 2
 */

#include <iostream>
#include <vector>

int sum(std::vector<int> &nums) {
    std::vector<int> dp(100001);
    auto result = dp[0] = nums[0];

    for (auto i = 1; i < nums.size(); i++) {
        dp[i] = std::max(dp[i - 1] + nums[i], nums[i]);
        result = std::max(result, dp[i]);
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::cout << sum(nums);
    return 0;
}