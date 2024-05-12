/*

    switch(expresion a evaluar){

        case literal1:
            conjunto de instrucciones1;
            break;

        case literal2:
            conjunto de instrucciones2;
            break;

        case literal3:
            conjunto de instrucciones3;
            break;
        
        defaul:
            conjunto de instrucciones por defecto al no cumplir;
            break;
    }

*/
#include<iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Digita un numero entre 1-5: "; cin>>numero;

    switch(numero){
        case 1: cout<<"Soy el numero 1"; break;
        case 2: cout<<"Soy el numero 2"; break;
        case 3: cout<<"Soy el numero 3"; break;
        case 4: cout<<"Soy el numero 4"; break;
        case 5: cout<<"Soy el numero 5"; break;
        default: cout<<"No esta en el rando de 1-5"; break;
    }

    return 0;
}