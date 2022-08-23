//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #10989 - 수 정렬하기 3
 * Bronze 1
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int array[10001] = {0,};
    int input;
    for (auto i = 0; i < n; i++) {
        std::cin >> input;
        array[input]++;
    }

    for (auto i = 1; i < 10001; i++) {
        while (array[i]-- != 0) {
            std::cout << i << "\n";
        }
    }

    return 0;
}