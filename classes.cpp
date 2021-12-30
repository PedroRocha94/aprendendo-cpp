#include <iostream>
#include <string>

using namespace std;

class MyClass { //Classe de exemplo.
    public: //Modificador de acesso, sendo public, os atributos e metodos podem ser vistos fora da classe.
        int myNum;
        string myString;

        //Construtores serve para dar algum valor inicial para o objeto que será instanciado.
        MyClass(){
            cout << "Good Morning\n";   //Assim que o Objeto for criado, será mostrado na tela a mensagem
        }                               //que está no construtor;
                                        //Usa-se construtores para instanciar objetos com valores padrões.


        //Métodos podem ser declarados e definidos dentro da classe.
        void myMethod(){    //Metodos são funções da classe.
            cout << "Hello World\n";
        }
        //Métodos podem ser declarados e definidos fora da classe.
        //Igual as funções da programação procedural.
        void myNewMethod();     //Declaração do método.
        //A definição se encontra no abaixo da função main().
};

class Car{  //Classe carro
    public:     //Modificador de acesso.
        string brand;
        string model;
        int year;

        Car(string x, string y, int z){     //Construtor da Classe carro.
            brand = x;                      //Valores sendo atribuidos, para quando o objeto seja criado
            model = y;                      //já tenha valores.
            year = z;
        }

        void acelerar(int ace = 0){     //Essa função define a velocidade em que o carro está.
            cout << "Carro a " << ace << "Km por hora" << "\n";
        }
};

int main(){

    MyClass myObj;  //Criação de um objeto da classe MyClass.

    myObj.myNum = 15;
    myObj.myString = "Some text";   //atributos da classe myClass. Adicionando valores.

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    myObj.myMethod();
    myObj.myNewMethod();

    cout << "----------------------------------------------";
    cout << "\n";

    Car myCar("BMW", "X5", 1999);  //Criação de um objeto carro. Valores sendo atribuidos aos atributos da classe carro.

    Car myCar2("Ford", "Mustang", 1969); //Criação de outro objeto carro.
                                        //Valores sendo atribuidos a outro objetos da classe carro.

    cout << myCar.brand << " " << myCar.model << " "<< myCar.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    cout << "----------------------------------------------";
    cout << "\n";

    Car carro1("Ford", "Fusca", 1990);

    cout << carro1.brand << " " << carro1.model << " "
         << carro1.year << " ";
        carro1.acelerar(80);
        cout << "\n";
    return 0;
}

void MyClass::myNewMethod(){        //definição do método da classe myClass
    cout << "Hi, guys\n";
}