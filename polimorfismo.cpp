#include <iostream>
#include <string>

using namespace std;
//Polimorfismo modifica os métodos herdados para fazer diferentes funções se necessário.
class Animal{
    public:
        void animalSound(){
            cout << "The animal makes a sound \n";
        }
};

class Pig : public Animal{
    public:
        void animalSound(){
            cout << "The pig says: wee wee \n";     //O método foi modificado para que atendesse a
        }                                           //necessidade da classe.
};

class Dog : public Animal{
    public:
        void animalSound(){
            cout << "The dog says: Bow wow \n";
        }
};

int main(){

    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}