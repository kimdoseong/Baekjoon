//
// Created by doseong on 2022-08-31.
//

/**
 * Baekjoon #1358 - 하키
 * Silver 4
 */

#include <iostream>
#include <cmath>

int dist(int x, int y, int a, int b) {
    return ((x - a) * (x - a)) + ((y - b) * (y - b));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int w, h, x, y, p;
    std::cin >> w >> h >> x >> y >> p;

    auto r = std::pow((h / 2), 2);
    int cnt = 0;

    for (int i = 0; i < p; i++) {
        int x1, y1;
        std::cin >> x1 >> y1;

        if ((x <= x1 && x1 <= x + w && y <= y1 && y1 <= y + h) ||
            (dist(x, y + (h / 2), x1, y1) <= r) ||
            (dist(x + w, y + (h / 2), x1, y1) <= r))
            cnt++;
    }

    std::cout << cnt << "\n";
    return 0;
}