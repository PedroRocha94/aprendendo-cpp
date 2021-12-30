#include <iostream>

using namespace std;

int main(){

    //Laço enquanto
    //Esse laço verifica a condição entre os parenteses
    //Se for true, o bloco de código dentro da estrutura é executado
    int i = 0;
    while(i < 5){
        cout << "O valor de i eh: " << i << "\n";
        i++;
    }
    cout << "\n\n";

    //Laço para
    //Esse laço inicializa uma variavel de controle do laço
    //No meio é a condição de parada do laço
    //E na própria estrutura ele já incrementa a variável de controle do laço
    //Esse laço é utilizado quando se tem ideia de quantas vezes ele irá ser executado
    for(int j = 0; j < 5; j++){
        cout << "O valor de j eh " << j << "\n";
    }
    cout << "\n\n";

    //Laço enquanto
    //Mas que executa o código dentro da estrutura pelo menos uma vez
    int k = 0;
    do{
        cout << "O valor de k eh: " << k << "\n";
        k++;
    }while (k < 5);

    return 0;
}