//
// Created by kimdoseong on 2022/08/13.
//

/**
 * Baekjoon #2775 - 부녀회장이 될테야
 * Bronze 1
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::array<std::array<int, 14>, 15> arr{{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}};

    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int k, n;
        std::cin >> k >> n;

        int sum;
        for (int j = 0; j < k; j++) {
            sum = 0;
            for (int y = 0; y < n; y++) {
                sum += arr[j][y];
                arr[j + 1][y] = sum;
            }
        }

        std::cout << sum << "\n";
    }

    return 0;
}