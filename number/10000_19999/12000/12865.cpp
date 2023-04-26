//
// Created by doseong on 2023-04-26.
//

/**
 * Baekjoon #12865 - 평범한 배낭
 * Gold 5
 */

#include <iostream>
#include <vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    std::vector<std::pair<int, int>> arr;
    for(int i = 0; i < n; i++){
        int w, v;
        std::cin >> w >> v;
        arr.emplace_back(w, v);
    }

    int max{0};
    std::vector<int> dp;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

        }
    }

    std::cout << max;
    return 0;
}