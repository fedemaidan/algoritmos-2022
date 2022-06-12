//"Estadística de goles de Messi"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int total=0, cantGoles =0, maximo=0;

    cout<<"\n"<<"++++ ESTADISTICAS DE LOS GOLES DE MESSI ++++" << endl;

    do{

    cout<<"\n"<<" Ingrese la cantidad de goles por partido jugado : ";

    cin>>cantGoles;

    total = cantGoles + total;
        if(cantGoles>maximo){

            maximo = cantGoles;


        }



    }
    while(cantGoles>0);

    cout<<" Messi hizo un total de "<<total<<" goles y el maximo de goles en un partido fue de "<<maximo<<endl;


    return 0;
}