//
// Created by doseong on 2022-08-11.
//

/**
 * Baekjoon #2920 - 음계
 * Bronze 2
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num;
    std::cin >> num;

    int diff;
    num == 8 ? diff = 1 : diff = -1;

    int preNum = num;

    for (int i = 0; i < 7; i++) {
        std::cin >> num;
        if (diff != preNum - num) {
            std::cout << "mixed" << "\n";
            return 0;
        }

        preNum = num;
    }

    diff == -1 ? std::cout << "ascending" : std::cout << "descending";
    return 0;
}