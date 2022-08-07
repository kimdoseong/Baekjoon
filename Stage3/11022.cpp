//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #11022 - A + B - 8
 * Bronze 5
 */

#include <iostream>

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int a, b = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
    return 0;
}