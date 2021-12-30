#include <iostream>
#include <string>

using namespace std;

class Vehicle{      //classe pai, pois ela é a base para a outra classe
    public:
        string brand = "Ford";

        void honk(){
            cout << "Tuut, tuut!\n";
        }
};

class Car: public Vehicle{      //classe filha, herdando os atributos e metodos da classe pai.
    protected:                     //O ": public "nome da classe"" é o que diz que está herdando de outra classe;
        string model;
};

class Bike{
    public:
        void zuum(){
            cout << "Zuuuuuuuummmmm\n";
        }
};
//Uma classe pode pode receber herança de uma classe que já recebeu herança.
//Atributos com o modificador protected podem ser acessados pela classe filha, mas não por outras.

class CarElet: public Car{
    public:
        string fuel = "energy";

        void setModel(string m){
            model = m;
        }
        string getModel(){
            return model;
        }
};

//Uma classe pode receber herança de varias classes ao mesmo tempo

class BikeCar: public CarElet, public Bike{
};


int main(){

    CarElet myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.getModel() + "\n";
    cout << "============================================\n";

    CarElet myCarEle;
    myCarEle.honk();
    cout << myCarEle.brand + " " + myCarEle.getModel() + " " + myCarEle.fuel + "\n";
    cout << "============================================\n";

    BikeCar myBikeCar;
    myBikeCar.honk();
    myBikeCar.zuum();

    return 0;
}