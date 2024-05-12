#include<iostream>
using namespace std;

int main(){

    //Ejercicio a/b+1
    float a,b,resultado = 0;

    cout<<"Ingresa valor de A: "; cin>>a;
    cout<<"Ingresa valor de B: "; cin>>b;

    cout.precision(2); //esto permite redondear un numero a cuantos numero se reduce
    resultado = (a/b)+1;
    cout<<"\nTu resultado es: "<<resultado; //\n es un salto de linea
}