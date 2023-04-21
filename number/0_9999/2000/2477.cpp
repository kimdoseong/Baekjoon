//
// Created by kimdoseong on 2022/08/28.
//

/**
 * Baekjoon #2477 - 참외밭
 * Silver 3
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k;
    std::cin >> k;

    std::array<std::pair<int, int>, 6> point{};
    for (auto &i: point) {
        std::cin >> i.first >> i.second;
    }

    int max = 0;
    int result = 0;
    for (auto i = 0; i < point.size(); i++) {
        auto cur = point[i].second * point[(i + 1) % 6].second;
        if (cur > max) {
            max = cur;
            result = max - point[(i + 3) % 6].second * point[(i + 4) % 6].second;
        }
    }

    result *= k;
    std::cout << result << std::endl;
    return 0;
}