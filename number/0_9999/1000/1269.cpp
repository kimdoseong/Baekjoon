//
// Created by kimdoseong on 2022/08/25.
//

/**
 * Baekjoon #1269 - 대칭 차집합
 * Silver 4
 */

#include <iostream>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::unordered_set<int> hash;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        hash.emplace(num);
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
        int num;
        std::cin >> num;

        if (hash.find(num) != hash.end()) {
            count++;
        }
    }

    std::cout << (n - count) + (m - count) << std::endl;
    return 0;
}