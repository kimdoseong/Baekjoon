//
// Created by kimdoseong on 2023/08/08.
//

/**
 * Baekjoon #1107 - 리모컨
 * Gold 5
 */

#include <iostream>
#include <array>

int N;
std::array<bool, 10> break_down{false, };

int possible(int c)
{
	if (c == 0)
	{
		return break_down[0] ? 0 : 1; 
	}
	int len = 0;
	while (c > 0)
	{
		if (break_down[c % 10]) return 0;
		len += 1;
		c /= 10;
	}
	return len;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> N;

    int M;
    std::cin >> M;
    for(int i = 0; i < M; i++){
        int idx;
        std::cin >> idx;
        break_down[idx] = true;
    }

    int pos = 100;

if (N == 100) {
		std::cout << 0;
		return 0;
	}

	auto ans = abs(N - 100);
	for (int i = 0; i <= 1000000; i++) {
		if (possible(i)) {
			int temp = abs(N - i) + std::to_string(i).size();
			ans = std::min(ans, temp);
		}
	}

	std::cout << ans;
    return 0;
}