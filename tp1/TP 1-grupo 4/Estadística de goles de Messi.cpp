/* Estadística de goles de Messi". Tenemos un amigo que quiere tomar estadísticas 
de los goles de Messi y necesita un sistema que le ayude a hacer eso ya que no le
gustan las calculadoras. Necesita que le hagamos un sistema que en el cual el vaya
poniendo los goles que hizo Messi y los vaya sumando hasta finalizar cuando recibe
un número negativo. En ese momento imprimir por pantalla la sumatoria de todos los 
goles y cual fue la cantidad máxima de goles que metió en un partido.
Aclaración Solo quiere cargar los goles. Es decir, el número.*/

#include <iostream>
using namespace std;

int main()
{
    int goles, total=0;
    cout<<"Para terminar el programa escriba un numero negativo."<<endl;
    while(goles>=0)
    {
        cout<<"Ingrese la cantidad de goles de Messi: ";
        cin>>goles;
        if(goles>=0)
        {total+=goles;}
    }
    cout<<"La cantidad total de goles de Messi es de: "<<total<<endl;
    return 0;
}