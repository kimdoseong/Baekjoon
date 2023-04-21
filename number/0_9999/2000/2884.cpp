//
// Created by kimdoseong on 2022/08/03.
//

/**
 * Baekjoon #2884 - 알람 시계
 * Bronze 3
 */

#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m;

    m = m - 45;

    if (m < 0) {
        h -= 1;
        m += 60;

        if (h < 0) {
            h = 23;
        }
    }

    std::cout << h << " " << m;

    return 0;
}