//
// Created by doseong on 2022-08-18.
//

/**
 * Baekjoon #17478 - 재귀함수가 뭔가요?
 * Silver 5
 */

#include <iostream>

void recursion(int loop, const std::string& underBar) {
    std::cout << underBar << "\"재귀함수가 뭔가요?\"" << "\n";
    if(loop <= 0){
        std::cout << underBar << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << "\n";
        std::cout << underBar << "라고 답변하였지." << "\n";
        return;
    }

    std::cout << underBar << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << "\n";
    std::cout << underBar << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << "\n";
    std::cout << underBar << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << "\n";

    recursion(--loop, underBar + "____");

    std::cout << underBar << "라고 답변하였지." << "\n";
}


int main() {
    std::istream::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n";
    int n;
    std::cin >> n;

    recursion(n, std::string{});

    return 0;
}