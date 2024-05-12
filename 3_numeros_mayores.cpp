#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;

    cout<<"Digita 3 numeros: "<<endl; cin>>n1>>n2>>n3;

    if(n1==n2 && n1==n3 && n3==n2){
        cout<<"Tu numeros son iguales";
    }else if(n1>n2 && n1>n3){
        cout<<"Tu numero mayor es: "<<n1;
    }else if(n2>n1 && n2>n3){
        cout<<"Tu numero mayor es: "<<n2;
    }else if(n3>n1 && n3>n2){
        cout<<"Tu numero mayor es: "<<n3;
    }
}