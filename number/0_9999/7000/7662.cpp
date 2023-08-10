//
// Created by kimdoseong on 2023/08/10.
//

/**
 * Baekjoon #7662 - 이중 우선순위 큐
 * Gold 4
 */

#include <iostream>
#include <set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        int data_size;
        std::cin >> data_size;

        std::multiset<int> q;
        for (int j = 0; j < data_size; j++)
        {
            std::string input_delete;
            int number;
            std::cin >> input_delete >> number;

            if (input_delete == "I")
            {
                q.insert(number);
            }
            else
            {
                if (!q.empty())
                {
                    // "D"
                    switch (number)
                    {
                    case 1:
                        q.erase(--q.end());
                        break;
                    case -1:
                        q.erase(q.begin());
                        break;
                    }
                }
            }
        }
  
        q.empty() ? std::cout << "EMPTY" : std::cout << *(--q.end()) << " " << *q.begin();
        std::cout << "\n";
    }
    return 0;
}