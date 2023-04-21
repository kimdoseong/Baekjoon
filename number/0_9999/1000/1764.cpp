//
// Created by kimdoseong on 2022/08/25.
//

/**
 * Baekjoon #1764 - 듣보잡
 * Silver 4
 */

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::unordered_set<std::string> list;
    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;

        list.emplace(name);
    }

    int count = 0;
    std::vector<std::string> out;
    for (int i = 0; i < m; i++) {
        std::string name;
        std::cin >> name;

        if (list.find(name) != list.end()) {
            out.emplace_back(name);
            count++;
        }
    }
    std::sort(out.begin(), out.end());

    std::cout << count << "\n";
    std::for_each(out.begin(), out.end(), [](const std::string &name) {
        std::cout << name << " " << "\n";
    });

    return 0;
}