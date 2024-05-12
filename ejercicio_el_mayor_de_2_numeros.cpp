#include<iostream>

using namespace std;

int main(){
    int numero1, numero2;


    cout<<"Digita 2 numeros : "; cin>>numero1>>numero2;

    if(numero1==numero2){
        cout<<"Los numeros son iguales";
    }else if(numero1>numero2){
        cout<<"El mayor es "<<numero1;
    }
    else{
        cout<<"El mayor es "<<numero2;
    }
    
    return 0 ;
}