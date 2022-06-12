#include <iostream>
/*"Estadística de goles de Messi". Tenemos un amigo que quiere tomar estadísticas de los goles de Messi y necesita un sistema que le ayude a hacer eso ya que no le gustan las calculadoras.
 Necesita que le hagamos un sistema que en el cual el vaya poniendo los goles que hizo Messi y los vaya sumando hasta finalizar cuando recibe un número negativo.
 En ese momento imprimir por pantalla la sumatoria de todos los goles y cual fue la cantidad máxima de goles que metió en un partido.
- Aclaración: Solo quiere cargar los goles. Es decir, el número.*/
using namespace std;

int main()
{
    int Goles, gtotal, maximo;
    bool aux = 1;
    do{
        cout << "Ingrese los goles del partido" << endl;
        cin >> Goles;
        gtotal = gtotal + Goles;
        if (aux == 1|| Goles > maximo){
            aux = 0;
            maximo = Goles;
        }
    }while(Goles >= 0);
    cout << "Los goles totales fueron " << gtotal - Goles << endl;
    cout << "La cantidad maxima de goles en un partido fue de " << maximo;
    return 0;
}
