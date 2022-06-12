//"Estadística de goles de Messi". Tenemos un amigo que quiere tomar estadísticas de los goles de Messi y necesita un sistema que le ayude a hacer eso ya que no le gustan las calculadoras.
//Necesita que le hagamos un sistema que en el cual el vaya poniendo los goles que hizo Messi y los vaya sumando hasta finalizar cuando recibe un número negativo.
//En ese momento imprimir por pantalla la sumatoria de todos los goles y cual fue la cantidad máxima de goles que metió en un partido.
//**Aclaración**: Solo quiere cargar los goles. Es decir, el número.

#include <iostream>
using namespace std;

int main() {
	
	int contador=0, gol, maximo=0;
	
	cout<<"Estadistica de goles de Messi\n";
	cout<<"\nIngrese la cantidad de goles: ";
	cin>>gol;

	while(gol>=0){
		contador=contador+gol;
		
		if(gol>maximo){
			maximo=gol;
		}
		
		cout<<"\nIngrese la cantidad de goles: ";
		cin>>gol;
	}
	
	cout<<"\nLa cantidad total de goles es "<<contador;
	cout<<"\nLa cantidad maxima de goles que metio en un partido es "<< maximo;
	
	return 0;
}
