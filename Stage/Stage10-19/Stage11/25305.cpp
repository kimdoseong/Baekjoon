//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #25305 - 커트라인
 * Bronze 2
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::vector<int> score(n);

    for(int i = 0; i < n; i++){
        std::cin >> score[i];
    }

    std::sort(score.begin(), score.end(), std::greater<>());

    std::cout << score[k - 1];
    return 0;
}