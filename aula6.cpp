#include <iostream>

using namespace std;

int main(){

    int number1 = 15, number2 = 4;

    int resSoma = number1 + number2;

    int resSub  = number1 - number2;

    int resMult = number1 * number2;

    int resDiv  = number1 / number2;

    int resMod = number1 % number2;

    cout << "A soma eh " << resSoma;
    cout << "\n";
    cout << "A subtracao eh " << resSub;
    cout << "\n";
    cout << "A multiplicacao eh " << resMult;
    cout << "\n";
    cout << "A divisao eh " << resDiv;
    cout << "\n";
    cout << "O mode eh " << resMod;
    cout << "\n";

    return 0;
}