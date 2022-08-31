//
// Created by doseong on 2022-08-29.
//

/**
 * Baekjoon #1002 - 터렛
 * Silver 3
 */

#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        int x1, y1, r1, x2, y2, r2;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        auto d = std::pow((x1 - x2), 2) + std::pow((y1 - y2), 2);
        auto cond1 = std::pow((r1 - r2), 2);
        auto cond2 = std::pow((r1 + r2), 2);
        if (d == 0) {
            if (cond1 == 0)
                std::cout << "-1" << '\n';
            else
                std::cout << "0" << '\n';
        } else if (d == cond1 || d == cond2)
            std::cout << "1" << '\n';
        else if (cond1 < d && d < cond2)
            std::cout << "2" << '\n';
        else
            std::cout << "0" << '\n';
    }

    return 0;
}