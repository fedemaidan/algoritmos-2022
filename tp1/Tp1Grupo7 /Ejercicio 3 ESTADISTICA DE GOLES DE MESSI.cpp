#include <iostream>
// #include <conio.h>

// "ESTADISTICA DE GOLES DE MESSI"

using namespace std;

int main(){
	int goles,sumador, maximo;
	cout<<"Ingrese cantidad de goles:"<<endl;
	cin>>goles;

	sumador=0;
	maximo=0;

	while(goles>=0){
		sumador=sumador+goles;
		if(goles>maximo)
					maximo=goles;
		cout<<"Ingrese cantidad de goles:"<<endl;
		cin>>goles;
	}

	if(sumador<=0)
			cout<<"No hay datos para mostrar";
	else{
		cout<<endl<<"La sumatoria de todos los goles de messi es: "<<sumador<<endl;
		cout<<"El maximo de goles que anoto en un partido es: "<<maximo<<endl;
	}
 return 0;
}
