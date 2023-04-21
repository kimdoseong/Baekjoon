//
// Created by kimdoseong on 2022/09/07.
//

/**
 * Baekjoon #3036 - 링
 * Silver 4
 */

#include <iostream>
#include <array>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::array<int, 101> arr{};
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        int temp = std::gcd(arr[0], arr[i]);
        std::cout << arr[0] / temp << "/" << arr[i] / temp << "\n";
    }

    return 0;
}