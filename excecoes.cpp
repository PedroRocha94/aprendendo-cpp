#include <iostream>
#include <string>

using namespace std;

int main(){

    //Se alguma parte do código pode ter como apresenta erro,
    //o try/catch vai remediar e realizando outra tarefa.

    try{
        int age = 15;
        if(age >= 18){      //dentro do bloco try, a condição vai ser testada,
            cout << "Access granted - you are old enough.\n";   //se não passar pela condição,
        }else{              
            throw(age);     //o valor que deu erro vai ser lançado,
        }
    }catch(int number){//o parêmetro é o tipo de dado em que o throw manda, se não souber que tipo será
                        //se coloca, "...", assim será recebido todos os tipo de dados
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << number;   //e no bloco catch tentará resolver o problema,
    }                                   //ou mostrará uma mensagem do erro.


    return 0;
}