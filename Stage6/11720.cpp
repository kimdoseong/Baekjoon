//
// Created by kimdoseong on 2022/08/09.
//

/**
 * Baekjoon #11720 - 숫자의 합
 * Bronze 4
 */

#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += std::stoi(str.substr(i, 1));
    }
    std::cout << sum << "\n";
}