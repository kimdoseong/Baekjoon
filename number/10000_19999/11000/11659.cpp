//
// Created by kimdoseong on 2022/09/04.
//

/**
 * Baekjoon #11659 - 구간 합 구하기 4
 * Silver 3
 */

#include <iostream>
#include <vector>

int N, M;
std::vector<int> number;
std::vector<int> dp;

int sum(const std::pair<int, int>& section){
    return dp[section.second] - dp[section.first - 1];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N >> M;
    number.resize(N + 1, 0);
    dp.resize(N + 1, 0);

    std::cin >> number[1];
    dp[1] = number[1];
    for(int i = 2; i < N + 1; i++){
        std::cin >> number[i];
        
        dp[i] = dp[i - 1] + number[i];
    }

    for(int i = 0; i < M; i++){
        std::pair<int, int> section;
        std::cin >> section.first >> section.second;

        std::cout << sum(section) << "\n";
    }

    return 0;
}