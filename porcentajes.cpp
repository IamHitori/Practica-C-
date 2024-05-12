#include<iostream>
using namespace std;

int main(){
    float practica,teorica,participacion,nota_final = 0;

    cout<<"Digita la nota de practica: "; cin>>practica;
    cout<<"Digita la nota de teorica: "; cin>>teorica;
    cout<<"Digita la nota de participacion: "; cin>>participacion;

    practica = practica * 0.30; //30%
    teorica = teorica * 0.60; //60%
    participacion = participacion * 0.10; //10%
    nota_final= practica+teorica+participacion;

    cout<<"Tu calificacion es: "<<nota_final;

    return 0;
}