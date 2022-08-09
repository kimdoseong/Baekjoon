//
// Created by kimdoseong on 2022/08/09.
//

/**
 * Baekjoon #1065 - 한수
 * Silver 4
 */

#include <iostream>
#include <array>

int Han(int n) {
    if (n < 100)
        return n;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        int pos = 0;
        int diff = 0;
        std::array<int, 4> arr{};

        while (num > 0) {
            arr[pos] = num % 10;

            if (pos == 1) {
                diff = arr[pos - 1] - arr[pos];
            } else if (pos > 1) {
                int tmp = arr[pos - 1] - arr[pos];
                if (diff != tmp)
                    break;
            }

            num /= 10;
            pos++;
        }
        if (num == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cout << Han(n);
}
