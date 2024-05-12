#include<iostream>
#include<math.h> //Libreria matematica

using namespace std;

int main(){
    float x,y,resultado=0;

    cout<<"Ingresa valor de X: "; cin>>x;
    cout<<"Ingresa valor de Y: "; cin>>y;
    //Raiz cuadrada es sqrt()
    //Potenciar es pow(variable,numero a potenciar)
    resultado = (sqrt(x))/(pow(y,2)-1);
    cout<<"Tu resultado es: "<<resultado;


    return 0;
}