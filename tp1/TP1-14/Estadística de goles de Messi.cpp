#include <iostream>
using namespace std;

int main()
{
	int suma=0, goles, maximo=0, i;
	
	cout << "La cantidad de goles que hizo en el partido fue: " << endl;
	cin >> goles;
	
	while (goles>=0)
	{
		suma = suma + goles;
		
    	if (maximo==0 || goles>maximo)
    	{
    		maximo = goles;
		}
		cout << "La cantidad de goles que hizo en el partido fue: " << endl;
    	cin >> goles;
	}
	
	cout << "La sumatoria de los goles de todos los partidos de Messi es: " << suma << endl;
	cout << "La cantidad maxima de goles que metio en un partido fue: " << maximo << endl;

	return 0;
}

