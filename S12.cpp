#include <iostream>
using namespace std;

int main(){
setlocale(0,"Russian");
int Sum1 = 0;
int Sum2 = 0;
for (int number = 1; number <=1000; number +=4){
    if (number%7==0){
            Sum1=Sum1+number;
    }
}
for (int number = 0; number <=1000; number +=4){
    if (number%7==0){
            Sum2=Sum2+number;
    }
}
cout << "Сумма чисел, которая делится на 7 без остатка, начиная с 1: "<< Sum1<<endl;
cout << "Сумма чисел, которая делится на 7 без остатка, начиная с 0: "<< Sum2<<endl;
return 0;
}
