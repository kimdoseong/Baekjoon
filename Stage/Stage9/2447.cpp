//
// Created by kimdoseong on 2022-08-18.
//

/**
 * Baekjoon #2447 - 별 찍기 - 10
 * Gold 5
 */

#include <iostream>

void recursion_star(int i, int j, int num) {
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
        std::cout << ' ';
    } else {
        if (num / 3 == 0)
            std::cout << '*';
        else
            recursion_star(i, j, num / 3);
    }
}


int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            recursion_star(i, j, num);
        }
        std::cout << "\n";
    }

    return 0;
}