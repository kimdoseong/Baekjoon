//
// Created by doseong on 2022-08-12.
//

/**
 * Baekjoon #25304 - 영수증
 * Bronze 5
 */

#include <iostream>

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total, n;
    std::cin >> total >> n;

    for(int i = 0; i < n; i++){
        int price, cnt;
        std::cin >> price >> cnt;

        total -= (price * cnt);
    }

    total == 0 ? std::cout << "Yes" : std::cout << "No";
}