//
// Created by doseong on 2022-08-11.
//

/**
 * Baekjoon #1316 - 그룹 단어 체커
 * Silver 5
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;

        std::array<bool, 26> arr{false};
        bool checker = true;

        for (auto j = 0; j < str.length(); j++) {
            if (!arr[str[j] - 97]) {
                arr[str[j] - 97] = true;

                while (j < str.length()) {
                    if (str[j] == str[j + 1])
                        j++;
                    else break;
                }
            } else {
                checker = false;
                break;
            }
        }
        if (checker) {
            count++;
        }
    }

    std::cout << count;
}