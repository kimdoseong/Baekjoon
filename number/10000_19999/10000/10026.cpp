//
// Created by doseong on 2023-08-10.
//

/**
 * Baekjoon #10026 - 적록색약
 * Gold 5
 */

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int N;
std::vector<std::string> map;
std::vector<std::vector<bool>> visited;

std::array<std::pair<int, int>, 4> move{
    {{1, 0},
     {-1, 0},
     {0, 1},
     {0, -1}}};

void dfs(std::pair<int, int> pos, const char color)
{
    for (const auto &[x, y] : move)
    {
        auto newX = pos.first + x;
        auto newY = pos.second + y;

        if (newX >= 0 && newY >= 0 &&
            newX < N && newY < N &&
            visited[newX][newY] == false &&
            map[newX][newY] == color)
        {
            visited[newX][newY] = true;
            dfs(std::pair<int, int>{newX, newY}, color);
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N;

    visited.assign(N, std::vector<bool>(N, false));
    map.resize(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> map[i];
    }

    int count1{0};
    int count2{0};
    // 정상
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (visited[i][j] == false)
            {
                dfs(std::pair<int, int>{i, j}, map[i][j]);
                count1++;
            }
        }
    }

    // 적록색약
    std::for_each(map.begin(), map.end(), [](std::string &row)
                  {
        for(auto& elem: row){
            if(elem == 'G'){
                elem = 'R';
            }
        } });
    visited.assign(N, std::vector<bool>(N, false));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (visited[i][j] == false)
            {
                dfs(std::pair<int, int>{i, j}, map[i][j]);
                count2++;
            }
        }
    }

    std::cout << count1 << " " << count2;
    return 0;
}