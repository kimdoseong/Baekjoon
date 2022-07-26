//
// Created by kimdoseong on 2022/08/04.
//

/**
 * Baekjoon #11021 - A + B - 7
 * Bronze 5
 */

#include <iostream>

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int a, b;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a + b << "\n";
    }
    return 0;
}