/*"Estadística de goles de Messi". Tenemos un amigo que quiere tomar estadísticas de los goles de Messi y necesita un sistema
que le ayude a hacer eso ya que no le gustan las calculadoras.
Necesita que le hagamos un sistema que en el cual el vaya poniendo los goles que hizo Messi y los vaya sumando hasta
finalizar cuando recibe un número negativo.
En ese momento imprimir por pantalla la sumatoria de todos los goles y cual fue la cantidad máxima de goles que metió en un partido.
--Aclaración: Solo quiere cargar los goles. Es decir, el número. */


#include <iostream>

using namespace std;

int main ()
{
    int gol, sgol = 0, max = 0, ant;             // declaro las variables a utilizar

    cout << "Ingrese de a uno o mas goles y negativo si quiere finalizar: ";
    cin >> gol;                                  // almaceno la cantidad de goles ingresada en gol

    ant = gol;                                   // guardo en una variable el primer valor obtenido
    sgol += gol;                                 // arranco con la sumatoria de los goles
    while(gol >= 0)
    {
        cout << "Ingrese el o los goles o negtivo si quiere finalizar: ";
        cin >> gol;

        if(max == 0)                            // si max==0 evalúo si ant>gol, si no, max = gol
        {
            if(ant > gol)
                max = ant;
            else
                max = gol;
        }
        else
        {
            if(gol > max)                       // cuando max!=0,todos los casos menos el primero, veo cual es el mayor gol y lo almaceno
                max = gol;
        }

        if(gol >= 0)                             // al finalizar ingresamos un numero negativo, y ese no entra en la sumatoria,
            sgol += gol;                        // así que lo excluímos con gol>=0
    }

    if(sgol >= 0)
    {
        cout << "El total de goles convertidos por messi es: " << sgol << endl;
        cout << "La mayor cantidad de goles convertida en un partido es: " << max << endl;
    }
    else
        cout << "No hizo goles ";
    return 0;
}