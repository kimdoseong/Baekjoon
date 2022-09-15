//
// Created by kimdoseong on 2022/09/14.
//

/**
 * Baekjoon #24060 - 알고리즘 수업 - 병합 정렬 1
 * Silver 4
 */

#include <iostream>
#include <vector>

int cnt = 0;

void merge(std::vector<int> &A, int p, int r, int q, int K) {
    int tmp[q + 1];
    int i = p, j = r + 1, t = 1;

    while (i <= r && j <= q) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }

    while (i <= r)
        tmp[t++] = A[i++];
    while (j <= q)
        tmp[t++] = A[j++];

    i = p, t = 1;
    while (i <= q) {
        A[i++] = tmp[t++];

        if (++cnt == K)
            std::cout << tmp[t - 1];
    }
}

void merge_sort(std::vector<int> &A, int p, int q, int K) {
    if (p < q) {
        int r = (p + q) / 2;
        merge_sort(A, p, r, K);
        merge_sort(A, r + 1, q, K);
        merge(A, p, r, q, K);
    }
}

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1, k);
    if (cnt < k) std::cout << -1;

    return 0;
}