//
// Created by kimdoseong on 2022/08/02.
//

/**
 * Baekjoon #1330 - 두 수 비교하기
 * Bronze 5
 */

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    (a == b) ? std::cout << "==" : (a < b) ? std::cout << "<" : std::cout << ">";
}