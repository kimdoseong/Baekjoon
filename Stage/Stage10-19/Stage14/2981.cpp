//
// Created by kimdoseong on 2022/09/05.
//

/**
 * Baekjoon #2981 - 검문
 * Gold 4
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::vector<int> num( n);

    for (int i = 0; i < n; i++) {
        std::cin >> num[i];
    }
    std::sort(num.begin(), num.end());

    int gcd = num[1] - num[0];
    for (int i = 2; i < n; i++) {
        gcd = std::gcd(gcd, num[i] - num[i - 1]);
    }

    std::vector<int> result;
    for (int i = 2; i * i <= gcd; i++) {
        if (gcd % i == 0) {
            result.push_back(i);
            result.push_back(gcd / i);
        }
    }
    result.push_back(gcd);
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}