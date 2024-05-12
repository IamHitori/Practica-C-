#include<iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Ingresa un numero: "; cin>>numero;

    if(numero==0)
    {
        cout<<"Tu numero es cero.";
    }else if(numero < 0)
    {
        cout<<"Tu numero es negativo";
    }else
    {
        cout<<"Tu numero es positivo";
    }
    return 0;
}