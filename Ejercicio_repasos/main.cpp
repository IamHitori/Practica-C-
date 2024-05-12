#include<iostream>

using namespace std;

int main(){
    int cerebro=0,numero=0,cerebro2=0;
    float n1,n2,n3;
    char vocal;

    cout<<"Ingresa el dato que quieras hacer."<<endl;
    cout<<"1.- Saber el numero mayor de 3 numeros."<<endl;
    cout<<"2.- Saber si una vocal es minuscula o mayuscula."<<endl;
    cout<<"3.- Saber el numero mayor de 2 numeros."<<endl;
    cout<<"4.- Saber si es numero positivo o negativo."<<endl;
    cout<<"5.- Numero par o impar."<<endl;
    cout<<"6.- Operaciones aritmeticas basicas."<<endl;
    cout<<"7.- Raiz cuadrada."<<endl;
    cout<<"8.- Potenciar un numero."<<endl;
    cout<<"9.- Rango de edad de 18 a 25 anos."<<endl;
    cout<<""<<endl;
    cout<<":";
    cin>>cerebro;

    switch (cerebro)
    {
    case 1:

        cout<<"Ingresa 3 numeros: "; cin>>n1>>n2>>n3;

        if((n1==n2)&&(n1==n3)&&(n2==n3)){
            cout<<"Tus numeros son iguales";
        }else if((n1>n2)&&(n1>n3)){
            cout<<"Tu numero mayoer es "<<n1<<endl;
        }else if((n2>n1)&&(n2>n3)){
            cout<<"Tu numero mayor es "<<n2<<endl;
        }else if((n3>n1)&&(n3>n2)){
            cout<<"Tu numero mayor es "<<n3<<endl;
        }else{
            cout<<"No ingresaste ningun dato XXXXXXXXXX ";
        }

        break;

    case 2:

        cout<<"Ingresa una vocal: "; cin>>vocal;

        switch (vocal){

        case 'a':
            cout<<"Tu vocal es una minuscula";
        break;

        case 'e':
            cout<<"Tu vocal es una minuscula";
        break;

        case 'i':
            cout<<"Tu vocal es una minuscula";
        break;

        case 'o':
            cout<<"Tu vocal es una minuscula";
        break;

        case 'u':
            cout<<"Tu vocal es una minuscula";
        break;

        case 'A':
            cout<<"Tu vocal es una mayuscula";
        break;

        case 'E':
            cout<<"Tu vocal es una mayuscula";
        break;

        case 'I':
            cout<<"Tu vocal es una mayuscula";
        break;

        case 'O':
            cout<<"Tu vocal es una mayuscula";
        break;

        case 'U':
            cout<<"Tu vocal es una mayuscula";
        break;

        default:
            cout<<"Ingresa una vocal correcto";
        break;

        
        }
    
        break;

    case 3:
        cout<<"Ingresa 2 numeros: "; cin>>n1>>n2;

        if((n1==n2)){
            cout<<"Tus numeros son iguales";
        }else if((n1>n2)){
            cout<<"Tu numero mayor es "<<n1<<endl;
        }else if(n2>n1){
            cout<<"Tu numero mayor es "<<n2<<endl;
        }else{
            cout<<"No ingresaste ningun dato XXXXXXXXXX ";
        }

        break;

    case 4:
        //positivo o negativo

        cout<<"Ingresa un numero: "; cin>>n1;

        if(n1==0){
            cout<<"Tu numero es 0";
        }else if(n1<0){
            cout<<"Tu numero es negativo";
        }else{
            cout<<"Tu numero es positivo";
        }
        break;
    
    case 5:
        //numero par o impar
        cout<<"Ingresa un numero: "; cin>>numero;

        if(numero==0){
            cout<<"Tu numero es igual a 0";
        }else if(numero%2==0){
            cout<<"Tu numero es par.";
        }else{
            cout<<"Tu umero es impar";
        }

        break;

    case 6:
        //operaciones basicas

        float suma,resta,multiplicacion,divicion;
        
        cout<<"1.- Suma."<<endl;
        cout<<"2.- Resta. "<<endl;
        cout<<"3.- Multiplicacion. "<<endl;
        cout<<"4.- Divicion. "<<endl;
        cout<<"Ingresa la operacion que quieres hacer: "; cin>>cerebro2;

        switch (cerebro2)
        {
        case 1:
            
        break;
        
        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        default:
            cout<<"Dato no valido.";
        break;
        }
        break;

    case 7:

        break;

    case 8:

        break;

    case 9:

        break;

    default:

        cout<<"Numero invalido";
        break;
    }

    return 0;
}