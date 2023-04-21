//
// Created by kimdoseong on 2022/09/18.
//

/**
 * Baekjoon #2178 - 미로 탐색
 * Silver 1
 */

#include <iostream>
#include <array>
#include <queue>

constexpr int MAX = 100;

int N, M;
std::array<std::array<int, MAX>, MAX> Maze{0,};
std::array<std::array<bool, MAX>, MAX> Visited{false,};
struct QInfo{
    int x = 0;
    int y = 0;
    int move = 1;
};

std::queue<QInfo> Queue;
std::array<std::pair<int, int>, 4> Dist = {{{-1, 0},
                                            {1, 0},
                                            {0, -1},
                                            {0, 1}}};

void Adjacent(int x, int y, int move) {
    for (const auto d: Dist) {
        auto new_x = x + d.first;
        auto new_y = y + d.second;

        if (new_x < 0 || new_y < 0 || new_x >= N || new_y >= M ||
            !Maze[new_x][new_y] || Visited[new_x][new_y]) {
            continue;
        }

        Visited[new_x][new_y] = true;
        Queue.push({new_x, new_y, move + 1});
    }
}

int BFS(int x, int y) {
    Visited[x][y] = true;
    Queue.push({x, y});

    while (!Queue.empty()) {
        auto qInfo = Queue.front();
        Queue.pop();

        if(qInfo.x == N - 1 && qInfo.y == M - 1) {
            return qInfo.move;
        }

        Adjacent(qInfo.x, qInfo.y, qInfo.move);
    }

    return -1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N >> M;
    for (int i = 0; i < N; i++) {
        std::string m_tmp;
        std::cin >> m_tmp;
        for (int j = 0; j < M; j++) {
            Maze[i][j] = m_tmp[j] - '0';
        }
    }

    std::cout << BFS(0, 0);
    return 0;
}