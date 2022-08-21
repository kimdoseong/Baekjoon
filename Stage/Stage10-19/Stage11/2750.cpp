//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #2750 - 수 정렬하기
 * Bronze 2
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for(int i = 0; i < n; i++){
        std::cin >> num[i];
    }

    std::sort(num.begin(), num.end());

    for(const auto& number : num){
        std::cout << number << "\n";
    }

    return 0;
}