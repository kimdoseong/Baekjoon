//
// Created by kimdoseong on 2022/08/07.
//

/**
 * Baekjoon #4673 - 셀프 넘버
 * Silver 5
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<bool> v(10001, false);

    for(int i = 1; i <= 10000; i++){
        int sum = i;
        int num = i;
        while(num > 0){
            sum += (num % 10);
            num /= 10;
        }

        if(sum > 10000)
            continue;

        v[sum] = true;
    }

    for(int i = 1; i <= 10000; i++){
        if(!v[i])
            std::cout << i << "\n";
    }
}
