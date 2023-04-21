//
// Created by kimdoseong on 2022/09/07.
//

/**
 * Baekjoon #1010 - 다리 놓기
 * Silver 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        std::cin >> n >> m;

        int ans = 1;
        int r = 1;
        for (int j = m; j > m - n; j--) {
            ans *= j;
            ans /= r++;
        }

        std::cout << ans << "\n";
    }

    return 0;
}