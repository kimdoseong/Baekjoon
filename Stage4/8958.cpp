//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #8958 - OX 퀴즈
 * Bronze 2
 */

#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;

        int sum = 0;
        int count = 1;

        for (char &c: str) {
            if (c == 'O') {
                sum += count++;
            } else {
                count = 1;
            }
        }

        std::cout << sum << "\n";
    }

    return 0;
}