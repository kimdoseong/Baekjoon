//
// Created by kimdoseong on 2022/08/09.
//

/**
 * Baekjoon #10809 - 알파벳 찾기
 * Bronze 5
 */

#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (auto i: alphabet) {
        auto pos = str.find(i);
        std::cout << static_cast<int>(pos) << " ";
    }
}