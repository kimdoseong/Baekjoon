//
// Created by kimdoseong on 2022/09/02.
//

/**
 * Baekjoon #1037 - 약수
 * Bronze 1
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++) {
        std::cin >> num[i];
    }

    std::sort(num.begin(), num.end());

    std::cout << num.front() * num.back();
    return 0;
}