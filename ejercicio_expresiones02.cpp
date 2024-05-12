#include<iostream>
using namespace std;

int main(){
    float a,b,c,d,e,f, resultado = 0;
    cout<<"Tu operacion es la siguiente (a+(b/c))/(d+(e/f))"<<endl;
    cout<<"Ingresa el valor de A: "; cin>>a;
    cout<<"Ingresa el valor de B: "; cin>>b;
    cout<<"Ingresa el valor de C: "; cin>>c;
    cout<<"Ingresa el valor de D: "; cin>>d;
    cout<<"Ingresa el valor de E: "; cin>>e;
    cout<<"Ingresa el valor de F: "; cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout<<"Tu resultado es: "<<resultado;

    return 0;
}