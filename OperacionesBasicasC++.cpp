
#include <iostream>

int main()
{
    using namespace std;
    float primerValor, segundoValor;
    
    cout<<"Escribe el primer número: "<<endl;
    cin>>primerValor;
    
    cout<<"Escribe el segundo número: "<<endl;
    cin>>segundoValor;
    cout<<endl;
    
    float suma = primerValor+segundoValor;
    float resta = primerValor-segundoValor;
    float multiplicacion = primerValor*segundoValor;
    float division = primerValor/segundoValor;
    
    cout<<"La suma es "<<suma <<endl;
    cout<<"La resta es "<<resta << endl;
    cout<<"La multiplicación es "<<multiplicacion <<endl;
    cout<<"La división es " << division <<endl;
    
    return 0;
    }

