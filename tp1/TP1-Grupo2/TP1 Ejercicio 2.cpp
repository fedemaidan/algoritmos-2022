//"El pizzaron de Bart automático": Con las clases a distancia, el castigo de Bart de escribir lo mismo en el pizarron muchas veces paso a ser virtual.
//Cada vez que lo castigan debe escribir la misma palabra 100 veces. Necesita que le hagamos un sistema que reciba una palabra y la muestre por pantalla 100 veces para que Bart lo pueda usar cada vez que lo castigan.

#include <iostream>
using namespace std;

int main() {
	
	char palabra[40];
	int i=0,cantidad=100;
	
	cout<<"Ingrese la palabra a repetir: ";
	cin>>palabra;
	
	for(i;i<cantidad;i++){
		cout<< palabra <<" ";
		
	}
	
	return 0;
}
