//
// Created by kimdoseong on 2022/09/18.
//

/**
 * Baekjoon #9663 - N-Queen
 * Gold 4
 */

// X-A = Y-B

#include <iostream>
#include <array>

int n, count = 0;
std::array<int, 15> arr{0,};

bool Check(int level) {
    for (int i = 0; i < level; i++) {
        if (arr[i] == arr[level] || abs(arr[level] - arr[i]) == level - i) {
            return false;
        }
    }

    return true;
}

void NQueen(int x) {
    if (x == n) {
        count++;
    } else {
        for (int i = 0; i < n; i++) {
            arr[x] = i;
            if (Check(x)) {
                NQueen(x + 1);
            }
        }
    }
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> n;

    NQueen(0);
    std::cout << count;
    return 0;
}