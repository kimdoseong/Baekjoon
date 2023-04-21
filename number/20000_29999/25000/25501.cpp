//
// Created by kimdoseong on 2022/09/14.
//

/**
 * Baekjoon #25501 - 재귀의 귀재
 * Bronze 2
 */

#include <iostream>
#include <string>

int recursion(const std::string& s, int l, int r, int& count) {
    count++;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, count);
}

int isPalindrome(const std::string& s, int& count) {
    return recursion(s, 0, static_cast<int>(s.length()) - 1 , count);
}

int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::string str;
        std::cin >> str;

        int count = 0;
        auto ret = isPalindrome(str, count);

        std::cout << ret << " " << count << "\n";
    }

    return 0;
}