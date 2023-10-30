#include<iostream>
#include<vector>
#include<map>

int main() {
    { // for loop
        int n = 5;
        for (int i = 0; i < n; ++i) {
            std::cout << i << std::endl;
        }
    }

    { // for in a nutshell
        for(/*1: Блок объявления*/int i = 0; /*2: Блок условия*/i < 5; /*4: Блок итерации*/++i) {
            /*3: Тело цикла*/
            std::cout << i << std::endl;
        }
    }

    {
        std::vector<int> vc(5, 10);
        for (auto& it : vc) {
            // do some stuff
        }

        std::map<int, int> mp{
                {1, 2},
                {2, 3},
                {3, 4}
        };
        for (auto const& [key, value] : mp) {
            // do some stuff
        }
    }

    { // while loop
        int n = 12;
        while(n % 2 == 0) {
            n /= 2;
        }
    }
    { // while loop
        while(/*(1): Блок условия*/true) {
            /*(2): Тело цикла*/
        }
    }

    { // do while loop
        int n = 12;
        do {
            std::cout << n << std::endl;
            n /= 2;
        } while(n % 2 == 0);
    }
    { // do while loop
        do {
            /*(1): Тело цикла*/
        } while(/*(2): Блок условия*/true);
    }
}