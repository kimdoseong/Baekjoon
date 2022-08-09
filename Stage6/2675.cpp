//
// Created by kimdoseong on 2022/08/09.
//

/**
 * Baekjoon #2675 - 문자열 반복
 * Bronze 2
 */

#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // cases
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        // loop
        int repeat;
        std::cin >> repeat;

        // string
        std::string str;
        std::cin >> str;

        for (char ch: str) {
            for (auto j = 0; j < repeat; j++) {
                std::cout << ch;
            }
        }
        std::cout << "\n";
    }
}