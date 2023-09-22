//
// Created by kimdoseong on 2023/09/04.
//

/**
 * Baekjoon #11660 - 구간 합 구하기 5
 * Silver 1
 */

#include <iostream>
#include <vector>

int N, M;
std::vector<std::vector<int>> number;
std::vector<std::vector<int>> dp;

int sum(const std::pair<int, int> &from, const std::pair<int, int> &to)
{
    int s{0};
    for (int i = from.second; i <= to.second; i++)
    {
        s += dp[to.first][i] - dp[from.first - 1][i];
    }

    return s;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N >> M;
    number.resize(N + 1, std::vector<int>(N + 1, 0));
    dp.resize(N + 1, std::vector<int>(N + 1, 0));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            std::cin >> number[i][j];
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            dp[i][j] = dp[i - 1][j] + number[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        std::pair<int, int> from, to;
        std::cin >> from.first >> from.second >> to.first >> to.second;

        std::cout << sum(from, to) << "\n";
    }

    return 0;
}