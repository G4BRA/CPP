#include <iostream>
#include <math.h>

using namespace std;

// Функция для расчёта степени
float step(float a, int s) {
    float result = 1;
    for (int i = 0; i < s; i++) {
        result *= a;
    }
    return result;
}

// Функция факториала
float factorial(int n) {
    float result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Функция для вычисления синуса с использованием ряда Тейлора
float sint(float x) {
    float result = 0;
    int sign = 1; // Для чередования знаков
    for (int i = 1; i <= 19; i += 2) { // Первые 10 членов ряда (1, 3, 5, ..., 19)
        result += sign * (step(x, i) / factorial(i));
        sign *= -1; // Меняем знак
    }
    return result;
}

int main() {
    cout << step(2, 10) << endl; // Проверка степени
    cout << factorial(6) << endl; // Проверка факториала
    cout << sint(5) << endl; // Проверка синуса
    cout << sin(5) << endl; // Сравнение с sin из math.h
    return 0;
}

/* Немного лирики. Я когда писал код, то столкнулся с проблемой. Писал int {функция}, и, соотвественно терялась точность)
Например, факториал резко возрастал, и переполнялся)))
В общем, вот. Также, я постарался реализовать расчёт синунса разложением в ряд Тейлора без математической библиотеки(Так сказать, мозг размять:))*/
