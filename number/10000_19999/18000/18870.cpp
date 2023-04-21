//
// Created by doseong on 2022-08-23.
//

/**
 * Baekjoon #18870 - 좌표 압축
 * Silver 2
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> number(n);

    for (int i = 0; i < n; i++) {
        std::cin >> number[i];
    }

    auto copy = number;
    std::sort(copy.begin(), copy.end());
    copy.erase(std::unique(copy.begin(), copy.end()), copy.end());

    std::for_each(number.begin(), number.end(), [&copy](int num) {
        std::cout << std::lower_bound(copy.begin(), copy.end(), num) - copy.begin() << " ";
    });

    return 0;
}