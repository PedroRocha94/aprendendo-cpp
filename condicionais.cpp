#include <iostream>
#include <string>

using namespace std;

int main(){

    //condicional simples;
    if(20 > 10){
        cout << "20 maior que 10";
    }
    cout << "\n\n";

    //condicional com variavel e alternativa para se for falso;
    int x = 15, y = 19;

    if(x > y){
        cout << x << " maior que " << y;
    }else{
        cout << x << " menor que " << y;
    }

    //condicional com mais de duas opções;
    if(x == y){
        cout << x << " igual a " << y;
    }else if( x > y){
        cout << x << " maior que " << y;
    }else{
        cout << x << " menor que " << y;
    }

    switch (x){
    case 10:
        cout << "Valor de x eh 20";
        break;
    case 15:
        cout << "Valor de x eh 15";
        break;
    default:
        cout << "Valor de x eh" << x;
        break;
    }

    return 0;
}