#include <iostream>
#include <string>
using namespace std;

string queen_hit(string cl1, string cl2) {
    // Проверка корректности ввода
    if (cl1.length() != 2 || cl2.length() != 2) {
        return "Error, 0";
    }
// Разбиваем позицию на букву и цифру
    char word1 = cl1[0];
    char word2 = cl2[0];
    int number1 = cl1[1] - '0';
    int number2 = cl2[1] - '0';

    // Проверка допустимости координат
    char n1[9] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    bool valid1 = false, valid2 = false;
    int numberword1 = 0, numberword2 = 0;
// Соотносим букву к числу
    for (int i = 1; i < 9; i++) {
        if (word1 == n1[i]) {
            valid1 = true;
            numberword1 = i;
        }
        if (word2 == n1[i]) {
            valid2 = true;
            numberword2 = i;
        }
    }
// Проверяем на ошибки
    if (!valid1 || !valid2 || number1 < 1 || number1 > 8 || number2 < 1 || number2 > 8) {
        return "Error, 0";
    }

    // Проверка угрозы ферзя
    // 1. Проверка по горизонтали или вертикали
    if (numberword1 == numberword2 || number1 == number2) {
        return "1";
    }

    // 2. Проверка по диагонали
    if (abs(numberword1 - numberword2) == abs(number1 - number2)) {
        return "1";
    }

    return "0";
}

int main() {
    cout << queen_hit("e2", "e4") << endl; // 1
    cout << queen_hit("e2", "f4") << endl; // 0
    cout << queen_hit("a1", "c3") << endl; // 1
    cout << queen_hit("h8", "a1") << endl; // 1
    cout << queen_hit("8e", "a1") << endl; // Error, 0
    cout << queen_hit("a8", "q1") << endl; // Error, 0
    return 0;
}
