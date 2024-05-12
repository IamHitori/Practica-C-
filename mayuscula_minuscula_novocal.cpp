#include<iostream>
using namespace std;

int main(){

    char vocal;
    cout<<"Ingresa una vocal: "; cin>>vocal;

    switch(vocal)
    {
        case 'a': cout<<"Es una vocal a"; break;
        case 'e': cout<<"Es una vocal e"; break;
        case 'i': cout<<"Es una vocal i"; break;
        case 'o': cout<<"Es una vocal o"; break;
        case 'u': cout<<"Es una vocal u"; break;
        case 'A': cout<<"Es una vocal A"; break;
        case 'E': cout<<"Es una vocal E"; break;
        case 'I': cout<<"Es una vocal I"; break;
        case 'O': cout<<"Es una vocal O"; break;
        case 'U': cout<<"Es una vocal U"; break;
        default: cout<<"No es una vocal"; break;
    }
    return 0;
}