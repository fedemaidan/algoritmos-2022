#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string Pal;
	cout<<"Ingrese la palabra"<<endl;
	getline (cin, Pal); //getline() funcion que lee una linea de texto
	for(int i=1; i<=100;i++){
		cout<<i<<": "<<Pal<<endl;
	}
	return 0;
}
