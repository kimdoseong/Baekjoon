//
// Created by doseong on 2022-08-25.
//

/**
 * Baekjoon #10816 - 숫자 카드 2
 * Silver 4
 */

#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::unordered_map<int, int> nHash;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nHash[num]++;
    }

    int m;
    std::cin >> m;
    std::vector<int> mVec(m);
    for (int i = 0; i < m; i++) {
        std::cin >> mVec[i];
    }

    for (int i = 0; i < m; i++) {
        std::cout << nHash[mVec[i]] << " ";
    }
    return 0;
}