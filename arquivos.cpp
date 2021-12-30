#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    //Criando e abrindo um arquivo de texto.
    ofstream MyFile("filename.txt");

    //Escrevendo no arquivo.
    MyFile << "Fazendo teste dos aquivos.";

    //Fechando o arquivo
    MyFile.close();
    //É uma boa prática sempre fechar os aquivos quando não forem mais ser utilizados

    cout << "===================================================\n";
    //Criando uma variavel de texto, para que seja armazenada a saida do arquivo
    string myText;

    //Lendo o texto de um arquivo
    ifstream MyReadFile("filename.txt");

    //Para ler um arquivo sempre usar um laço para que o arquivo seja lido linha a linha
    while(getline(MyReadFile, myText)){
        //A saida com o que tem no arquivo
        cout << myText;
    }

    MyReadFile.close();
    return 0;
}