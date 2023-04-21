//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #10818 - 최소, 최대
 * Bronze 3
 */

#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int num = 0;
    std::cin >> num;

    auto min = num, max = num;

    for (int i = 1; i < n; i++) {
        std::cin >> num;
        min = std::min(min, num);
        max = std::max(max, num);
    }

    std::cout << min << " " << max;
    return 0;
}