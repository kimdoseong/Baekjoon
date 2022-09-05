//
// Created by kimdoseong on 2022/09/04.
//

/**
 * Baekjoon #11050 - 이항 계수 1
 * Bronze 1
 */

#include <iostream>

int factorial(int num){
    if(num <= 1)
        return 1;

    return factorial(num - 1) * num;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::cout << factorial(n) / (factorial(k) * factorial(n - k));
    return 0;
}