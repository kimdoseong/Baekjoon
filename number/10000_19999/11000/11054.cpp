//
// Created by kimdoseong on 2023/02/07.
//

/**
 * Baekjoon #11054 - rㅏ장 긴 바이토닉 부분 수열
 * Gold 4
 */

#include <iostream>
#include <vector>

int solution(int n, std::vector<int> &arr) {
    std::vector<int> fdp(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                fdp[i] = std::max(fdp[i], fdp[j] + 1);
            }
        }
    }

    std::vector<int> bdp(n, 1);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (arr[i] > arr[j]) {
                bdp[i] = std::max(bdp[i], bdp[j] + 1);
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
        answer = std::max(answer, fdp[i] + bdp[i] - 1);
    }

    return answer;
}


int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << solution(n, arr);
    return 0;
}