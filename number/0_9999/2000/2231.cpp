//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #2231 - 분해합
 * Bronze 2
 */

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int constructor = 0;
    for (int i = 0; i <= n; i++) {
        int num = i;

        int sum = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n) {
            constructor = i;
            break;
        }
    }

    std::cout << constructor;
    return 0;
}