//"Puede entrar": Un parque de diversiones instaló una montaña rusa a la cual solo puede entrar personas que midan más de 150cm.
//Por lo cual nos piden hacer un sistema que reciba la altura de una persona e imprima por pantalla si esa persona puede entrar o no

#include <iostream>
using namespace std;

int main() {
	
	int alt,condicion,i=0;
	condicion=150;
	
	cout<<"Bienvenido! Para poder subir a la Montaña Rusa tiene que medir mas de 150cm."<<endl;
	cout<<"Para finalizar ingrese 0\n"<<endl;
	
	cout<<"Ingrese su altura en cm:  ";
	cin>>alt;
	
	while (alt!=0){
		
		if(alt>condicion){
		cout<<"Puede entrar\n"<<endl;
		}
		else {
		cout<<"No puede entrar\n"<<endl;
		}
		
		cout<<"Ingrese su altura en cm:  ";
		cin>>alt;
	
	}
	
	cout<<"\nHasta luego!"<<endl;

	return 0;
}
