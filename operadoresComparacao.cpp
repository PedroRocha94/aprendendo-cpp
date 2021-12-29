#include <iostream>

using namespace std;

int main(){

    int x = 5, y = 3;

    // Operadores de comparação
    /* 
        < e >, maior e menor
        >= e <=, maior ou igual e menor ou igual
        !=, diferente
        ==, igual
    */

    // O retorno da comparação se da através de 0 ou 1;
    // 0 quando o resultado da comparação é falso;
    // 1 quando o resultado da comparação é verdadeiro.

    //verificando se x é maior que y;
    cout << (x > y) << endl;

    //verificando se y é maior que x;
    cout << (x < y) << endl;

    //verificando se x é igual a y;
    cout << (x == y) << endl;

    //verificando se x é diferente y;
    cout << (x != y) << endl;

    //verificando se x é maior ou igual a y;
    cout << (x >= y) << endl;

    //verificando se x é menor ou igual a y.
    cout << (x <= y) << endl;

    cout << "\n\n";
//-------------------------------------------------------

    // Operadores lógicos;
    /*
        &&, "e" lógico, isso e aquilo;
        ||, "ou" lógico, isso ou aquilo;
        !, "não" lógico, não isso.
    */

   //verificando se x é maior que 3 e menor que 10;
   cout << (x > 3 && x < 10) << endl;

    //verificando se x é maior que 3 ou x é menor que 4; 
    cout << (x > 3 || x < 4) << endl;

    // O operador ! nega toda a sentença
    // Então verifica:
    // Se x é "não maior"(menor) que 3 e que x é "não menor"(maior) que 10.
    cout << (!(x > 3 && x < 10)) << endl;

    return 0;
}