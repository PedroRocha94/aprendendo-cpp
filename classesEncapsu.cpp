#include <iostream>
#include <string>

using namespace std;

class Employee{
    private:            //Modificador de acesso,
        int salary;     //A variável está encapsulada, apenas a própria classe pode vê-la e modifica-la.

    public:                         //Modificador de acesso,
        void setSalary(int s){      //Os métodos estão publicos, ou seja, podem ser vistos e utilizados
            salary = s;             //por fora da classe.
        }

        int getSalary(){
            return salary;
        }
};


int main(){

    Employee myObj;

    myObj.setSalary(5000);      //Atribuindo valor ao salário através dos métodos.
    cout << "Salary of the employee is: " << myObj.getSalary();     //Mostrando o valor através dos métodos.

    return 0;
}