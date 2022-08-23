//
// Created by doseong on 2022-08-23.
//

/**
 * Baekjoon #10814 - 나이순 정렬
 * Silver 5
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool compare(const std::pair<int, std::string> &a, const std::pair<int, std::string> &b) {
    return a.first < b.first;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, std::string>> array(n);

    for (int i = 0; i < n; i++) {
        std::cin >> array[i].first;
        std::cin >> array[i].second;
    }


    std::stable_sort(array.begin(), array.end(), compare);
    std::for_each(array.begin(), array.end(), [](const std::pair<int, std::string> &pair) {
        std::cout << pair.first << " " << pair.second << "\n";
    });

    return 0;
}