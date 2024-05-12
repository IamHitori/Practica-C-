#include<iostream>
using namespace std;

int main(){

    int numero = 0;

    cout<<"Ingresa un numero: "; cin>>numero;

    if(numero==0)
    {
        cout<<"Tu numero es cero";
    }
    else if(numero%2==0) //SI tu numero entre 2 da residuo 0 es par
    {
        cout<<"Tu numero es par.";
    }else{
        cout<<"Tu numero es impar";
    }
    return 0;
}