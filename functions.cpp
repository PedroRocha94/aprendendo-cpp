#include <iostream>
#include <string>

using namespace std;

//Função sem retorno que tem como objetivo
//mostrar na tela uma saudação
//Todas as funções que forem criadas, tem que estar acima da função main()
//no documento, pois quando o arquivo .cpp é lido, começa de cima para baixo
//caso a função não tenha sido encontrada antes de ser chamada na main()
//a função não irá executar o código em seu escopo.
void greetings(){
    cout << "Hello";
}

//Uma função pode ser criada abaixo da função main()
//mas para que possa executar o código de seu escopo
//uma função tem que ser declarada antes da main()
//e a definiçao da função pode ficar abaixo da main()
//Isso torna o código mais legível.
void farewells();   //Declaração da função.

double calculatorSum(double number1, double number2);   //Declaração da função

int main(){

    greetings();
    cout << "\n";
    farewells();
    cout << "\n";


    cout << "Digite um numero qualquer: ";
    double x;
    cin >> x;
    cout << "Digite outro numero qualquer: ";
    double y;
    cin >> y;

    cout << "O valor da soma eh: " << calculatorSum(x,y);

    return 0;
}


void farewells(){    //Definição da função.
    cout << "Bye";
}

double calculatorSum(double number1, double number2){   //Definição da função
    return number1 + number2;
}