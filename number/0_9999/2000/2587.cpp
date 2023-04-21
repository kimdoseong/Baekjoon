//
// Created by kimdoseong on 2023/02/07.
//

/**
 * Baekjoon #num - title 
 * rank num
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> arr(5);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        sum += num;
        arr[i] = num;
    }
    std::sort(arr.begin(), arr.end());

    std::cout << sum / 5 << "\n";
    std::cout << arr[2] << "\n";
    return 0;
}