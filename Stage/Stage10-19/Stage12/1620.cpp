//
// Created by doseong on 2022-08-25.
//

/**
 * Baekjoon #1620 - 나는야 포켓몬 마스터 이다솜
 * Silver 4
 */

#include <iostream>
#include <unordered_map>
#include <string>

bool isNumber(const std::string &str) {
    for (auto const &c: str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    // output
    std::unordered_map<std::string, int> pokemonNumber;
    std::unordered_map<int, std::string> pokemonName;

    for (int i = 1; i <= n; i++) {
        std::string str;
        std::cin >> str;
        pokemonNumber.emplace(str, i);
        pokemonName.emplace(i, str);
    }

    for (int i = 0; i < m; i++) {
        std::string str;
        std::cin >> str;

        if (isNumber(str)) {
            std::cout << pokemonName[std::stoi(str)] << "\n";
        } else {
            std::cout << pokemonNumber[str] << "\n";
        }
    }

    return 0;
}