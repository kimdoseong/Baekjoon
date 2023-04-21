//
// Created by kimdoseong on 2022-11-18.
//

/**
 * Baekjoon #2580 - 스도쿠
 * Gold 4
 */


#include <iostream>
#include <array>
#include <vector>

std::array<std::array<int, 9>, 9> board;
std::vector<std::pair<int, int>> point;
int count;

void Offset(int &num) {
    switch (num) {
        case 1:
            num += 2;
            break;
        case 2:
            num += 4;
            break;
        default:
            break;
    }
}


bool Check(int pos, int num) {
    for (int i = 0; i < 9; i++) {
        // row
        if (board[point[pos].first][i] == num) {
            return false;
        }

        // column
        if (board[i][point[pos].second] == num) {
            return false;
        }
    }

    // 3 * 3
    auto row = point[pos].first / 3;
    auto column = point[pos].second / 3;
    Offset(row);
    Offset(column);

    for (int i = row; i <= row + 2; i++) {
        for (int j = column; j <= column + 2; j++) {
            if (board[i][j] == num) {
                return false;
            }
        }
    }

    // valid
    return true;
}

bool Sudoku(int pos, int add) {
    if (add == count) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                std::cout << board[i][j] << " ";
            }

            std::cout << "\n";
        }

        return true;
    }

    for (auto num = 1; num <= 9; num++) {
        if (Check(pos, num)) {
            board[point[pos].first][point[pos].second] = num;

            auto end = Sudoku(pos + 1, add + 1);

            if (end) {
                return true;
            }
        }
    }

    board[point[pos].first][point[pos].second] = 0;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> board[i][j];

            if (board[i][j] == 0) {
                point.emplace_back(i, j);
                count++;
            }
        }
    }

    Sudoku(0, 0);

    return 0;
}