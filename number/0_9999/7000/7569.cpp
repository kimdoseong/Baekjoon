//
// Created by kimdoseong on 2023/08/03.
//

/**
 * Baekjoon #7569 - 토마토
 * Gold 5
 */

#include <iostream>
#include <vector>
#include <array>
#include <queue>
#include <tuple>

int M; // column
int N; // row
int H; // heigt
int count{0};

std::array<std::tuple<int, int, int>, 6> move{{{0, -1, 0},
                                               {0, 1, 0},
                                               {0, 0, -1},
                                               {0, 0, 1},
                                               {-1, 0, 0},
                                               {1, 0, 0}}};

std::queue<std::tuple<int, int, int>> q;

std::queue<std::tuple<int, int, int>> bfs(std::vector<std::vector<std::vector<int>>> &v)
{
    std::queue<std::tuple<int, int, int>> store;
    while (!q.empty())
    {
        const auto [ph, pn, pm] = q.front();
        q.pop();

        for (const auto [mh, mn, mm] : move)
        {
            auto h = ph + mh;
            auto n = pn + mn;
            auto m = pm + mm;

            if (h < H && n < N && m < M &&
                h >= 0 && n >= 0 && m >= 0 &&
                v[h][n][m] == 0)
            {
                store.push({h, n, m});
                v[h][n][m] = 1;
                count--;
            }
        }
    }

    return store;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> M >> N >> H;

    std::vector<std::vector<std::vector<int>>> v(H, std::vector<std::vector<int>>(N, std::vector<int>(M)));
    for (int h = 0; h < H; h++)
    {
        for (int n = 0; n < N; n++)
        {
            for (int m = 0; m < M; m++)
            {
                std::cin >> v[h][n][m];
                if (v[h][n][m] == 1)
                {
                    q.push({h, n, m});
                }
                else if (v[h][n][m] == 0)
                {
                    count++;
                }
            }
        }
    }

    int day{0};
    while (!q.empty())
    {
        // 첫번째 예외 + queue 는 있으나 더이상 갈곳이 없음
        if (count == 0)
        {
            break;
        }

        q = bfs(v);
        day++;
    }

    count == 0 ? std::cout << day : std::cout << -1;

    return 0;
}