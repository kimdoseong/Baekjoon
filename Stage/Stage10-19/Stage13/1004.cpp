//
// Created by kimdoseong on 2022/08/31.
//

/**
 * Baekjoon #1004 - 어린왕자
 * Silver 3
 */

#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        int n;
        std::cin >> n;

        auto enter = 0;
        auto departure = 0;
        for (int j = 0; j < n; j++) {
            int cx, cy, cr;
            std::cin >> cx >> cy >> cr;

            if (std::pow((cx - x1), 2) + std::pow((cy - y1), 2) < std::pow(cr, 2)) {
                if (std::pow((cx - x2), 2) + std::pow((cy - y2), 2) > std::pow(cr, 2))
                    departure++;
            }

            if (std::pow((cx - x1), 2) + std::pow((cy - y1), 2) > std::pow(cr, 2)) {
                if (std::pow((cx - x2), 2) + std::pow((cy - y2), 2) < std::pow(cr, 2))
                    enter++;
            }
        }

        std::cout << enter + departure << '\n';
    }

    return 0;
}