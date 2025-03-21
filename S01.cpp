#include <iostream>
using namespace std;

int main(){
    setlocale(0,"Russian");
    //Инициализация данных
    int number;
    double number2;
    float number3;
    char symbol;

    //Ввод чисел
    cout<<"Введите число типа int: ";
    cin >> number;
    cout<<"Введите число типа double: ";
    cin >> number2;
    cout<<"Введите число типа float: ";
    cin >> number3;
    cout<<"Введите символ: ";
    cin >> symbol;
    //Вывод чисел
    cout << "Int "<<number<<endl;
    cout << "Double "<<number2<<endl;
    cout << "Float "<<number3<<endl;
    cout << "Symbol "<<symbol<<endl;
    //Вычисление
    cout << number2<<" - "<<number<<" = "<<number2 - number<<endl;
    cout << number3<<" + "<<number2<<" = "<<number3 + number2<<endl;
    cout << number3<<" / "<<number3<<" = "<<number3 / number3<<endl;
    cout << number2<<" * "<<number2<<" = "<<number2 * number2<<endl;
    return 0;
    }
