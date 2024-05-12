#include<iostream>
using namespace std;

int main(){
    int edad;
    cout<<"Ingresa tu edad: "; cin>>edad;

    //Verificar si tu edad esta en el rango entre 18-25
    //18,19,20,21,22,23,24,25
    if((edad<=18)&&(edad>=25))
    {
        cout<<"Tu edad esta en el rango de edad (18-25).";
    }else
    {
        cout<<"Tu edad no esta en el rango.";
    }

    return 0;
}