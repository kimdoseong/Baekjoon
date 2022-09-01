//
// Created by kimdoseong on 2022/09/02.
//

/**
 * Baekjoon #5086 - 배수와 약수
 * Bronze 3
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    while (true) {
        std::cin >> a >> b;
        if (!(a | b))
            break;

        if (a % b == 0) {
            std::cout << "multiple" << "\n";
        } else if (b % a == 0) {
            std::cout << "factor" << "\n";
        } else {
            std::cout << "neither" << "\n";
        }
    }
    return 0;
}