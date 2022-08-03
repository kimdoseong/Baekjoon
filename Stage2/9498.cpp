//
// Created by kimdoseong on 2022/08/03.
//

/**
 * Baekjoon #9498 - 시험 성적
 * Bronze 5
 */

#include <iostream>

int main() {
    int score = 0;

    std::cin >> score;

    if (score >= 90)
        std::cout << "A";
    else if (score >= 80)
        std::cout << "B";
    else if (score >= 70)
        std::cout << "C";
    else if (score >= 60)
        std::cout << "D";
    else
        std::cout << "F";
}