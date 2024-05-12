#include<iostream>
using namespace std;

int main(){
    float x,y,i = 0;

    cout<<"Ingresa valor de X: "; cin>>x;
    cout<<"Ingresa valor de Y: "; cin>>y;

    i=x;
    x=y;
    y=i;

    cout<<"Tu numero de x ahora es: "<<x<<endl;
    cout<<"Tu numero de y ahora es: "<<y<<endl;
    return 0;
}