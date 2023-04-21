//
// Created by doseong on 2022-08-23.
//

/**
 * Baekjoon #1181 - 단어 정렬
 * Silver 5
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool compare(const std::string &a, const std::string &b) {
    if (a.length() == b.length())
        return a < b;

    return a.length() < b.length();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<std::string> array(n);
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    std::sort(array.begin(), array.end(), compare);

    array.erase(std::unique(array.begin(), array.end()), array.end());
    std::for_each(array.begin(), array.end(), [](const std::string &str) {
        std::cout << str << "\n";
    });

    return 0;
}