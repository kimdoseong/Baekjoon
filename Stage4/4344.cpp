//
// Created by kimdoseong on 2022/08/07.
//


/**
 * Baekjoon #4344 - 평균은 넘겠지
 * Bronze 1
 */

#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cout << std::fixed;
    std::cout.precision(3);

    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int student = 0;
        std::cin >> student;

        double sum = 0;
        double count = 0;

        std::vector<int> score(student, 0);
        for (int j = 0; j < student; j++) {
            std::cin >> score[j];
            sum += score[j];
        }

        double average = sum / student;
        for (auto s: score) {
            if (s > average) {
                count++;
            }
        }

        std::cout << count / student * 100 << "%" << "\n";
    }

    return 0;
}