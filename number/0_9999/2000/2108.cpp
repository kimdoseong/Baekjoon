//
// Created by doseong on 2022-08-22.
//

/**
 * Baekjoon #2108 - 통계학
 * Silver 3
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> array(8001);
    std::vector<int> number(n);
    int input;

    int sum = 0;
    for (auto i = 0; i < n; i++) {
        std::cin >> input;

        sum += input;
        number[i] = input;
        array[input + 4000]++;
    }

    int mode = 0;
    int modeCnt = 0;
    bool second = false;
    for (auto i = 0; i < array.size(); i++) {
        if (array[i] > 0) {
            int num = i;
            num -= 4000;

            // 최빈값
            if (array[i] == modeCnt && !second) {
                mode = num;
                second = true;
            } else if (array[i] > modeCnt) {
                modeCnt = array[i];
                mode = num;
                second = false;
            }
        }
    }

    std::sort(number.begin(), number.end());
    auto average = std::round(static_cast<float>(sum) / static_cast<float>(n));
    if (average == -0) {
        average = 0;
    }

    std::cout << average << "\n";
    std::cout << number[number.size() / 2] << "\n";
    std::cout << mode << "\n";
    std::cout << number.back() - number.front() << "\n";
    return 0;
}