#include<iostream>

int main() {
    {
        if(/* Условие */false) {
            // ...
        } else {
            // ...
        }

        if(/* Условие */false) {
            //...
        } // Блок else можно опустить
    }

    {
        char a;
        a = 'a';
        switch (a) {
            case 'a':
                std::cout << "this is a";
                break;
            case 'b':
                std::cout << "this is b";
                break;
        }
    }
}