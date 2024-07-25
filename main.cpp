/******************************************************************************
Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <iostream>

int main()
{
    using namespace std;
    int edad = 0;
    int MayorDeEdad = 18;
    
    cout<<"Favor de capturar tu edad: "<<endl;
    cin>>edad;
    
    if(edad >= MayorDeEdad) {
        cout<<"Eres mayor de edad";
    } else if (edad <=0) {
        cout<<"No es posible capturar una edad menor o igual a 0";
    } else {
        cout<<"Eres menor de edad";
    }

    return 0;
}