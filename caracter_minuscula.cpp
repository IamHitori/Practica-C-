#include<iostream>
using namespace std;

int main(){

    char vocal;
    cout<<"Ingresa una vocal: "; cin>>vocal;

    switch (vocal)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula"; break;
        default: cout<<"No es una vocal minuscula"; break;
    }
    
    return 0;
}