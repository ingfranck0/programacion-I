#include <iostream>
using namespace std;
int main(){
    double suma,resta,multi,divi,num1,num2;
    // paso 1 solicitar los 2 valores
    cout << "ingrese valor 1: ";
    cin>> num1;
    cout << "ingrese valor 2: ";
    cin>> num2;

    // paso 2 realizar las operaciones
    suma = num1+num2;
    resta= num1-num2;
    multi= num1*num2;
    
    // paso 3  se compara  para realizar   la division  y se imprimen resultados
    if (num2!=0)
    {
        divi=num1/num2;
        std::cout<<"la suma es: "<<suma<<std::endl;
        std::cout<<"la resta es: "<<resta<<std::endl;
        std::cout<<"la multiplicacion es:" <<multi<<endl;
        std::cout<<"la division es: " <<divi<<std::endl;
    }else{
        std::cout<<"la suma es: "<<suma<<std::endl;
        std::cout<<"la resta es: "<<resta<<std::endl;
        std::cout<<"la multiplicacion es:" <<multi<<endl;
        std::cout << "Error: No se puede dividir por cero." << std::endl;
    }
    return 0;
}
