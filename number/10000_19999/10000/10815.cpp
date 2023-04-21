//
// Created by doseong on 2022-08-23.
//

/**
 * Baekjoon #10815 - 숫자 카드
 * Silver 5
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> nV(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nV[i];
    }
    std::sort(nV.begin(), nV.end());

    int m;
    std::cin >> m;
    std::vector<int> mV(m);
    for (int i = 0; i < m; i++) {
        std::cin >> mV[i];
    }

    std::vector<int> out(m, 0);
    for (int i = 0; i < mV.size(); i++) {
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nV[mid] == mV[i]) {
                out[i] = 1;
                break;
            }

            if (nV[mid] > mV[i]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }

    std::for_each(out.cbegin(), out.cend(), [](const int n) {
        std::cout << n << " ";
    });

    return 0;
}