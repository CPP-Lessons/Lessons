#include<iostrem>

int GLOBAL;
int GLOBAL_B = 1;

int main() {
    { // TYPES
        // Логический
        bool b = true; // true/false
        // Символьный
        char ch = 'a'; // Несмотря на то, что тип символьный, char хранит число — код символа в таблице ASCII.
        // Целочисленный
        int i = 0;          // unsigned int Все эти типы существуют с модификацией unsigned
        long l = 0;         // unsigned long
        long long ll = 0;   // unsigned long long
        // Вещественный (с плавающей запятой)
        float f = 0.0f;
        double d = 0.0f;
    }

    int a;
    int b = 3;

    auto c = 4;
//    auto d;

    double e = b;
    return 0;
}