//
// Created by doseong on 2022-08-26.
//

/**
 * Baekjoon #3009 - 네 번째 점
 * Bronze 3
 */

#include <iostream>
#include <array>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::array<std::array<int, 2>, 3> point{};

    for(int i = 0; i < 3; i++){
        std::cin >> point[i][0] >> point[i][1];
    }

    int x, y;
    point[0][0] == point[1][0] ? x = point[2][0] : point[0][0] == point[2][0] ?  x = point[1][0] :  x = point[0][0];
    point[0][1] == point[1][1] ? y = point[2][1] : point[0][1] == point[2][1] ?  y = point[1][1] :  y = point[0][1];

    std::cout << x << " " << y << "\n";
    return 0;
}