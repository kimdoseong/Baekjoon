//
// Created by kimdoseong on 2022/08/14.
//

/**
 * Baekjoon #10757 - 큰 수 A + B
 * Bronze 5
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string a;
    std::string b;

    std::cin >> a >> b;
    std::vector<int> result;
    if (a.length() < b.length())
        std::swap(a, b);

    std::string zero{};
    for (int i = 0; i < static_cast<int>(a.size() - b.size()); i++) {
        zero += "0";
    }

    b = zero + b;
    int carry = 0;
    for (int i = static_cast<int>(a.length()) - 1; i >= 0; i--) {
        auto sum = a[i] - '0' + b[i] - '0'  + carry;
        result.emplace_back(sum % 10);

        if (sum > 9) {
            carry = 1;
        } else {
            carry = 0;
        }
    }

    if (carry)
        result.emplace_back(1);

    std::reverse(result.begin(), result.end());
    for (auto r: result) {
        std::cout << r;
    }

    return 0;
}
