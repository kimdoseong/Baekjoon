//
// Created by kimdoseong on 2022/11/20.
//

/**
 * Baekjoon #14888 - 연산자 끼워넣기
 * Silver 1
 */

#include <iostream>
#include <vector>
#include <array>

int N;
std::vector<int> Nums;
std::array<int, 4> Operators;

int Max = -1000000000;
int Min = 1000000000;

void Calculation(int pos, int result) {
    if (pos >= N) {
        if (result > Max) {
            Max = result;
        }
        if (result < Min) {
            Min = result;
        }
        return;
    }


    for (int i = 0; i < 4; i++) {
        if (Operators[i] <= 0) {
            continue;
        }

        Operators[i]--;
        switch (i) {
            case 0: // +
                Calculation(pos + 1, result + Nums[pos]);
                break;
            case 1: // -
                Calculation(pos + 1, result - Nums[pos]);
                break;
            case 2: // *
                Calculation(pos + 1, result * Nums[pos]);
                break;
            default : // /
                Calculation(pos + 1, result / Nums[pos]);
                break;
        }
        Operators[i]++;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N;
    Nums.resize(N);

    for (int i = 0; i < N; i++) {
        std::cin >> Nums[i];
    }

    for (int i = 0; i < 4; i++) {
        std::cin >> Operators[i];
    }

    Calculation(1, Nums[0]);

    std::cout << Max << "\n";
    std::cout << Min << "\n";

    return 0;
}