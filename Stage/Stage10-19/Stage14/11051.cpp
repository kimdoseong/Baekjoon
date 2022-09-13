//
// Created by kimdoseong on 2022/09/06.
//

/**
 * Baekjoon #11051 - 이항 계수 2
 * Silver 3
 */

#include <iostream>

int cache[1001][1001];

int bino(int n, int k) {
    if (n == k || k == 0) return 1;
    int &ret = cache[n][k];
    if (ret != 0) return ret;
    return ret = bino(n - 1, k - 1) % 10007 + bino(n - 1, k) % 10007;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::cout << bino(n, k) % 10007;

    return 0;
}