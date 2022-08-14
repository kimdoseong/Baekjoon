//
// Created by kimdoseong on 2022/08/13.
//

/**
 * Baekjoon #10250 - ACM 호텔
 * Bronze 2
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n ;

    for(int i = 0; i < n; i++){
        int h, w, num;
        std::cin >> h >> w >> num;

        auto roomNum = num / h;
        auto result = num % h == 0 ? h * 100 + roomNum : num % h * 100 + roomNum + 1;

        std::cout << result << "\n";
    }

    return 0;
}