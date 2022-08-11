//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #15596 - 정수 N개의 합
 * Bronze 2
 */

#include <vector>

long long sum(std::vector<int> &a) {
    long long ans = 0;
    for (const auto &n: a) {
        ans += n;
    }
    return ans;
}