//
// Created by kimdoseong on 2022/08/22.
//

/**
 * Baekjoon #11650 - 좌표 정렬하기
 * Silver 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<std::vector<int>> arr(n, std::vector<int>(2));

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i][0];
        std::cin >> arr[i][1];
    }

    std::sort(arr.begin(), arr.end());
    std::for_each(arr.begin(), arr.end(), [](const std::vector<int> &num) {
        std::cout << num[0] << " " << num[1] << "\n";
    });

    return 0;
}