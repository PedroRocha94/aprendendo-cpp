#include <iostream>
#include <string>

using namespace std;

int main(){

    //criando variável string
    string greeting = "Hello";

    //utilizando funções da biblioteca string
    greeting.append(" World");

    cout << greeting << endl;

    // Alterando um caractere específico da string
    //com uma função da biblioteca string
    greeting[4] = 'T';

    cout << greeting << endl;

    cout << "\n";
    //Utilizando string na entrada dos programas
    //string firstName;

    /*cout << "Type your first name: ";
    // o "cin" só consegue capturar a primeira palavra
    cin >> firstName;

    cout << "You name is: " << firstName;
    */
    cout << "\n";
    //Para poder capturar toda uma linha é necessário utilizar o getline(cin, fullName)
    //e passando cin como paramêtro e a variável como outro parâmetro
    string fullName;
    
    cout << "Type your full name: ";
    getline(cin, fullName);

    cout << "Your name is: " << fullName;

    return 0;
}