//
// Created by kimdoseong on 2022/08/09.
//

/**
 * Baekjoon #1157 - 단어 공부
 * Bronze 1
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::array<int, 26> arr{0};
    for (char &c: str) {
        arr[std::toupper(c) - 65]++;
    }

    int max = arr[0];
    int maxCnt = 0;
    int pos = 0;

    for (auto i = 1; i < arr.size(); i++) {
        if (arr[i] == max)
            maxCnt++;
        else if (arr[i] > max) {
            max = arr[i];
            maxCnt = 0;
            pos = i;
        }
    }

    maxCnt != 0 ? std::cout << "?" : std::cout << static_cast<char>(pos + 65);
}