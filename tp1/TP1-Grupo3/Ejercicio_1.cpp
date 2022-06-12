#include <iostream>

using namespace std;

int main() {

	int altura;
	cout << "Hola, ingrese su altura en centimetros" << endl;
	cin >> altura;
	
	if(altura > 150){
		cout << "Usted puede pasar" << endl;
	} 
	else {
	
		cout << "Usted no puede pasar" << endl;
	}

	return	0;

}

