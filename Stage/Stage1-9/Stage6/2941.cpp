//
// Created by doseong on 2022-08-11.
//

/**
 * Baekjoon #2941 - 크로아티아 알파벳
 * Silver 5
 */

#include <iostream>
#include <array>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::array<std::string, 8> arr{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    std::string str;
    std::cin >> str;

    for (const auto &alphabet: arr) {
        while (true) {
            auto found = str.find(alphabet);
            if (found != std::string::npos) {
                // found 포함 n 개
                str.replace(found, alphabet.length(), " ");
            } else
                break;
        }
    }

    std::cout << str.length();
}