//
// Created by kimdoseong on 2022/08/25.
//

/**
 * Baekjoon #num - title 
 * rank num
 */

#include <iostream>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    std::cin >> str;
    std::unordered_set<std::string> hash;
    for (auto i = 0; i < str.length(); i++) {
        int pos = 0;
        while (pos + i + 1 <= str.length()) {
            hash.emplace(str.substr(pos++, i + 1));
        }
    }

    std::cout << hash.size();
    return 0;
}