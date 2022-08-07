//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #10952 - A + B - 5
 * Bronze 5
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b = 0;

    while (true) {
        std::cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        std::cout << a + b << "\n";
    }

    return 0;
}