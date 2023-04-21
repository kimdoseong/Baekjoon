//
// Created by kimdoseong on 2023/01/24.
//

/**
 * Baekjoon #14889 - 스타트와 링크
 * Silver 2
 */

#include <iostream>
#include <vector>

int N;
std::vector<std::vector<int>> Ability;
std::vector<bool> Select;
int Min = 1000;

void Func(int count, int pos) {
    if (count >= N / 2) {
        int A = 0, B = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (Select[i] && Select[j]) {
                    A += Ability[i][j];
                }
                if (!Select[i] && !Select[j]) {
                    B += Ability[i][j];
                }
            }
        }

        int result = std::abs(A - B);
        if (Min > result) {
            Min = result;
        }
        return;
    }

    for (int i = pos; i < N; i++) {
        if (!Select[i]) {
            Select[i] = true;
            Func(count + 1, i + 1);
            Select[i] = false;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N;
    Ability.resize(N, std::vector<int>(N));
    Select.resize(N, false);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> Ability[i][j];
        }
    }

    // Init
    Select[0] = true;
    Func(1, 1);
    std::cout << Min;
    return 0;
}