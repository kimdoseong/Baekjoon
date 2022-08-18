//
// Created by kimdoseong on 2022/08/19.
//

/**
 * Baekjoon #11729 - 하노이 탑 이동 순서
 * Silver 1
 */

#include <iostream>
#include <cmath>

void hanoi(int num, int from, int by, int to) {
    if (num == 1) {
        std::cout << from << " " << to << "\n";
        return;
    } else {
        hanoi(num - 1, from, to, by);
        std::cout << from << " " << to << "\n";
        hanoi(num - 1, by, from, to);
    }
}

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num;
    std::cin >> num;

    std::cout << static_cast<int>(std::pow(2, num)) - 1 << "\n";
    hanoi(num, 1, 2, 3);

    return 0;
}