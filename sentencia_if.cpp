/*
    La condicion if es
    
    if(condicion a cumplir){
        instrucciones 1
    }
    else{

        instrucciones 2 si no se cumple la primera
    }

*/
#include<iostream>

using namespace std;

int main(){
    int a,b = 5;    

    cout<<"Digita un numero: "; cin>> a;

    //El signo == es de igualdad saber si un datos es igual
    //El signo != es de diferencia de un dato
    if(a == b){
        cout<<"El numero es 5";
    }
    else{
        cout<<"Tu numero es diferente al 5";
    }

   return 0;
}