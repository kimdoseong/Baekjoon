//
// Created by kimdoseong on 2022/09/07.
//

/**
 * Baekjoon #9375 - 패션왕 신혜빈
 * Silver 3
 */

#include <iostream>
#include <map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int num;
        std::cin >> num;

        std::map<std::string, int> cloths;
        for (int j = 0; j < num; j++) {
            std::string name;
            std::string part;
            std::cin >> name >> part;

            if (cloths.find(part) != cloths.end()) {
                cloths[part]++;
            } else {
                cloths.emplace(part, 1);
            }
        }

        int result = 1;
        for (const auto &cloth: cloths) {
            result *= cloth.second + 1;
        }

        std::cout << result - 1 << '\n';
    }

    return 0;
}