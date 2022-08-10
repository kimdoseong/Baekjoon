//
// Created by kimdoseong on 2022/08/10.
//

/**
 * Baekjoon #1152 - 단어의 개수
 * Bronze 2
 */

#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    std::getline(std::cin, str);

    if (str.empty()) {
        std::cout << 0 << "\n";
        return 0;
    }

    int cnt = 1;
    for (auto c: str) {
        if (c == ' ')
            cnt++;
    }

    if (str[0] == ' ')
        cnt--;
    if (*(str.end() - 1) == ' ')
        cnt--;

    std::cout << cnt << "\n";
    return 0;
}