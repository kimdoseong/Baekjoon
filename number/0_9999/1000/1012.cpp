//
// Created by kimdoseong on 2022/07/13.
//

/**
 * Baekjoon #1012 - 유기농 배추
 * Silver 2
 */

#include <iostream>
#include <vector>
#include <queue>
#include <array>

std::vector<std::vector<bool>> visited;
std::vector<std::vector<bool>> map;
std::queue<std::pair<int, int>> q;

const std::array<std::pair<int, int>, 4> move{
    std::pair{0, 1},  // up
    std::pair{0, -1}, // down
    std::pair{-1, 0}, // left
    std::pair{1, 0},  // right
};

void bfs(const int M, const int N)
{
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (auto [tmpX, tmpY] : move)
        {
            auto [newX, newY] = std::pair<int, int>{x + tmpX, y + tmpY};
            if (newX >= 0 && newY >= 0 &&
                newX < M && newY < N &&
                visited[newX][newY] == false &&
                map[newX][newY] == true)
            {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }
}

int main(int, char **)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T, M, N, K;
    std::cin >> T;

    for (int t = 0; t < T; t++)
    {
        std::cin >> M >> N >> K;
        visited.assign(M, std::vector<bool>(N, false));
        map.assign(M, std::vector<bool>(N, false));
        if (!q.empty())
        {
            q.pop();
        }

        for (int i = 0; i < K; i++)
        {
            int a, b;
            std::cin >> a >> b;

            map[a][b] = true;
        }

        int count{0};
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (visited[i][j] == false &&
                    map[i][j] == true)
                {
                    visited[i][j] = true;
                    q.push({i, j});
                    count++;

                    bfs(M, N);
                }
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}
