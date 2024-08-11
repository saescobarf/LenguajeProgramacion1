
#include <iostream>
#include <string>
using namespace std;

bool esVocal(char v) {
	v = tolower(v);
	return (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u');
}

int main()
{
	string primerNombre, segundoNombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
	cout<<"Calculo de RFC "<<endl;

	cout<<"Escribe tu primer nombre: "<<endl;
	cin>>primerNombre;

	cout<<"Escribe tu segundo nombre: "<<endl;
	cin>>segundoNombre;

	cout<<"Escribe tu apellido paterno: "<<endl;
	cin>>apellidoPaterno;

	cout<<"Escribe tu apellido materno: "<<endl;
	cin>>apellidoMaterno;

	cout<<"Captura tu fecha de nacimiento en formato DDMMAAAA(solo números): "<<endl;
	cin>>fechaNacimiento;
	cout<<endl;

	char primerCaracter = toupper(apellidoPaterno[0]);
	char tercerCaracter = toupper(apellidoMaterno[0]);
	char cuartoCaracter = toupper(primerNombre[0]);
	char quintoCaracter = fechaNacimiento[6];
	char sextoCaracter = fechaNacimiento[7];
	char septimoCaracter = fechaNacimiento[2];
	char octavoCaracter = fechaNacimiento[3];
	char novenoCaracter = fechaNacimiento[0];
	char decimoCaracter = fechaNacimiento[1];
	char segundoCaracter = '\0';

	for (int i = 1; i < apellidoPaterno.length(); ++i) {
		if (esVocal(apellidoPaterno[i])) {
			segundoCaracter = toupper(apellidoPaterno[i]);
			break;
		}
	}
    
    cout<<"Tu RFC sin homoclave es: ";
	cout<<primerCaracter;
	cout<<segundoCaracter;
	cout<<tercerCaracter;
	cout<<cuartoCaracter;
	cout<<quintoCaracter;
	cout<<sextoCaracter;
	cout<<septimoCaracter;
	cout<<octavoCaracter;
	cout<<novenoCaracter;
	cout<<decimoCaracter;

	return 0;
}


