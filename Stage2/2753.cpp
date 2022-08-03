//
// Created by kimdoseong on 2022/08/03.
//

/**
 * Baekjoon #2753 - 윤년
 * Bronze 5
 */

#include <iostream>

int main() {
    int years = 0;

    std::cin >> years;

    if(years % 4 == 0){
        if(years % 100 != 0 || years % 400 == 0) {
            std::cout << 1;
            return 0;
        }
    }

    std::cout << 0;
    return 0;
}