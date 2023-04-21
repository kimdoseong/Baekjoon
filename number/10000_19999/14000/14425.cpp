//
// Created by doseong on 2022-08-25.
//

/**
 * Baekjoon #14425 - 문자열 집합
 * Silver 3
 */

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
bool binary_search(const std::vector<T> &nV, const std::vector<T> &mV, int index) {
    int left = 0;
    int right = nV.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nV[mid] == mV[index]) {
            return true;
        }

        if (nV[mid] > mV[index]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> nV(n);
    std::vector<std::string> mV(m);

    for (int i = 0; i < n; i++) {
        std::cin >> nV[i];
    }

    for (int i = 0; i < m; i++) {
        std::cin >> mV[i];
    }

    std::sort(nV.begin(), nV.end());
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        if (binary_search(nV, mV, i)) cnt++;
    }

    std::cout << cnt;
    return 0;
}