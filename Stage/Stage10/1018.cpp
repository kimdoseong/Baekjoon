//
// Created by kimdoseong on 2022/08/21.
//

/**
 * Baekjoon #1018 - 체스판 다시 칠하기
 * Silver 4
 */

#include <iostream>
#include <vector>
#include <algorithm>

int paint(const std::vector<std::vector<char>> &board, int x, int y) {
    int whiteStart = 0;
    int blackStart = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // 짝수줄
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    if (board[x + i][y + j] == 'W') {
                        blackStart++;
                    } else {
                        whiteStart++;
                    }
                } else {
                    if (board[x + i][y + j] == 'B') {
                        blackStart++;
                    } else {
                        whiteStart++;
                    }
                }
            }
                // 홀수줄
            else {
                if (j % 2 == 0) {
                    if (board[x + i][y + j] == 'B') {
                        blackStart++;
                    } else {
                        whiteStart++;
                    }
                } else {
                    if (board[x + i][y + j] == 'W') {
                        blackStart++;
                    } else {
                        whiteStart++;
                    }
                }
            }
        }
    }

    return std::min(whiteStart, blackStart);
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> board(n, std::vector<char>(m));
    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < m; j++) {
            std::cin >> board[i][j];
        }
    }

    int min = 64;
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            min = std::min(min, paint(board, i, j));
        }
    }

    std::cout << min;
    return 0;
}