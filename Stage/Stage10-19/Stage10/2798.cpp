//
// Created by kimdoseong on 2022/08/19.
//

/**
 * Baekjoon #2798 - 블랙잭
 * Bronze 2
 */

#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> number;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        number.emplace_back(num);
    }

    int result = 0;
    for (int i = 0; i < number.size(); i++) {
        for (int j = i + 1; j < number.size(); j++) {
            for (int k = j + 1; k < number.size(); k++) {
                auto tmp = number[i] + number[j] + number[k];

                if (tmp > result && tmp <= m) {
                    result = tmp;
                }

            }
        }
    }

    std::cout << result;
    return 0;
}