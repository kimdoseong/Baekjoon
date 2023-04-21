//
// Created by doseong on 2022-08-22.
//

/**
 * Baekjoon #1427 - 소트인사이드
 * Silver 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> array;

    while (n > 0) {
        array.emplace_back(n % 10);
        n /= 10;
    }

    std::sort(array.begin(), array.end(), std::greater<>());
    std::for_each(array.begin(), array.end(), [](int n) {
        std::cout << n;
    });

    return 0;
}