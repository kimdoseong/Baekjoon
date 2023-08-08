//
// Created by kimdoseong on 2023/08/07.
//

/**
 * Baekjoon #2206 - 벽 부수고 이동하기
 * Gold 3
 */

#include <iostream>
#include <vector>
#include <queue>
#include <array>

int N;
int M;
std::vector<std::vector<int>> map;
std::vector<std::vector<std::vector<bool>>> visited;
// map[][][crush]
// [0] crush f
// [1] crush t

struct Info
{
    int x;
    int y;
    bool crush;
    int count;
};
std::queue<Info> q;
std::array<std::pair<int, int>, 4> move{
    {{1, 0},
     {-1, 0},
     {0, -1},
     {0, 1}}};

void bfs(Info info)
{
    for (const auto &[mX, mY] : move)
    {
        auto nX = info.x + mX;
        auto nY = info.y + mY;
        if (nX >= 0 && nX < N &&
            nY >= 0 && nY < M)
        {
            if (info.crush == false &&
                visited[nX][nY][0] == false)
            {
                if (map[nX][nY] == 0)
                {
                    visited[nX][nY][0] = true;
                    q.push({nX, nY, info.crush, info.count + 1});
                }
                else
                {
                    visited[nX][nY][1] = true;
                    q.push({nX, nY, true, info.count + 1});
                }
            }
            else if (info.crush == true &&
                     visited[nX][nY][1] == false)
            {
                if (map[nX][nY] == 0)
                {
                    visited[nX][nY][1] = true;
                    q.push({nX, nY, info.crush, info.count + 1});
                }
            }
        }
    }
}

int main()
{
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N >> M;
    map.resize(N, std::vector<int>(M));
    visited.assign(N, std::vector<std::vector<bool>>(M, std::vector<bool>(2, false)));

    for (int i = 0; i < N; i++)
    {
        std::string tmp;
        std::cin >> tmp;
        for (int j = 0; j < tmp.length(); j++)
        {
            map[i][j] = tmp[j] - '0';
        }
    }

    q.push({0, 0, false, 1});
    while (!q.empty())
    {
        auto f = q.front();
        q.pop();
        if (f.x == N - 1 && f.y == M - 1)
        {
            std::cout << f.count;
            return 0;
        }

        bfs(f);
    }

    std::cout << -1;
    return 0;
}