//
// Created by kimdoseong on 2023/01/24.
//

/**
 * Baekjoon #24416 - 알고리즘 수업 - 피보나치 수 1
 * Bronze 1
 */

#include <iostream>
#include <array>

std::array<int, 100> f{};

int recursive(int n, int *count) {
    if (n == 1 || n == 2) {
        (*count)++;
        return 1;
    } else return (recursive(n - 1, count) + recursive(n - 2, count));
}

int dp(int n, int *count) {
    f[0] = 1;
    f[1] = 1;

    for (int i = 2; i < n; i++) {
        (*count)++;
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int r_count = 0;
    int dp_count = 0;
    recursive(n, &r_count);
    dp(n, &dp_count);

    std::cout << r_count << " " << dp_count;
    return 0;
}