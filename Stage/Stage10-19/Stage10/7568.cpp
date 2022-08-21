//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #7568 - 덩치
 * Silver 5
 */

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> people(n, std::vector<int>(2));
    for (int i = 0; i < n; i++) {
        std::cin >> people[i][0] >> people[i][1];
    }

    for (auto i = 0; i < people.size(); i++) {
        int k = 1;

        for (auto j = 0; j < people.size(); j++) {
            if (j == i)
                continue;
            if (people[i][0] < people[j][0] && people[i][1] < people[j][1])
                k += 1;
        }

        std::cout << k << " ";
    }

    return 0;
}