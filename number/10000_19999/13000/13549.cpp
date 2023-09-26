//
// Created by kimdoseong on 2023/09/25.
//

/**
 * Baekjoon #13549 - 숨바꼭질 3
 * Gold 5
 */

#include <iostream>
#include <queue>
#include <vector>

std::vector<bool> visited;
struct Q
{
    int count_;
    int point_;

    Q() = default;
    Q(int c, int p) : count_(c), point_(p) {}

    bool operator<(const Q &q) const
    {
        if (count_ == q.count_)
        {
            return point_ > q.point_;
        }

        return count_ > q.count_;
    }
};

int bfs(int start, int end)
{
    std::priority_queue<Q> q;
    q.push({0, start});
    visited[start] = true;

    while (!q.empty())
    {
        auto t = q.top();
        q.pop();

        if (t.point_ == end)
        {
            return t.count_;
        }

        if (t.point_ * 2 <= 100000 && !visited[t.point_ * 2])
        {
            visited[t.point_ * 2] = true;
            q.push({t.count_, t.point_ * 2});
        }

        if (t.point_ + 1 <= 100000 && !visited[t.point_ + 1])
        {
            visited[t.point_ + 1] = true;
            q.push({t.count_ + 1, t.point_ + 1});
        }

        if (t.point_ - 1 >= 0 && !visited[t.point_ - 1])
        {
            visited[t.point_ - 1] = true;
            q.push({t.count_ + 1, t.point_ - 1});
        }
    }

    return 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    int K;
    std::cin >> N >> K;
    visited.assign(100001, false);

    std::cout << bfs(N, K);
    return 0;
}