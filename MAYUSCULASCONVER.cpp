#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string texto ;
	string resultado ;
	cout << "Ingrese un texto: " << endl;

	getline(cin, texto);

	for (int i = 0; i < texto.size(); i++) {

		char letra = texto[i];
		if (letra >= 97 && letra <= 122) {
			char mayuscula = letra - 32;
			resultado = resultado + mayuscula;
		}
		else {
			resultado = resultado + letra;
		}
	}
	cout << "El resultado es: " << endl;
	cout << resultado << endl;

	
	return 0;
}
