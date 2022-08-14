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

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string a;
    std::string b;

    std::cin >> a >> b;
    std::vector<int> result;
    if(a.length() < b.length())
        std::swap(a, b);

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    int bPos = 1;
    int digit = 0;

    for(auto i = 0; i < a.length(); i++){
        result.emplace_back(a[i] - '0' + b[i] - '0');
    }


    return 0;
}
