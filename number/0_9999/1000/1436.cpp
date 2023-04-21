//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #1436 - 영화감독 숌
 * Silver 5
 */

#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int cnt = 0;

    std::string result;
    int num = 666;
    while (cnt != n) {
        auto tmp = std::to_string(num);
        if (tmp.find("666") != std::string::npos) {
            result = tmp;
            cnt++;
        }

        num++;
    }

    std::cout << result;
    return 0;
}