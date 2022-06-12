#include <bits/stdc++.h>

/* Estadística de goles de Messi
Tenemos un amigo que quiere tomar estadísticas de los goles
de Messi y necesita un sistema que le ayude a hacer eso ya
que no le gustan las calculadoras. Necesita que le hagamos
un sistema que en el cual el vaya poniendo los goles que
hizo Messi y los vaya sumando hasta finalizar cuando recibe
un número negativo. En ese momento imprimir por pantalla la
sumatoria de todos los goles y cual fue la cantidad máxima
de goles que metió en un partido.
Aclaración: Solo quiere cargar los goles. Es decir, el número.
*/

int main(int argc, char const *argv[])
{
  int gol, sum = 0, maxGoles = 0;
  std::cout << "Ingrese goles: ";
  std::cin >> gol;
  std::cout << std::endl;

  while (gol > -1)
  {
    sum += gol;
    if (gol > maxGoles)
      maxGoles = gol;
    std::cout << "Ingrese goles: ";
    std::cin >> gol;
    std::cout << std::endl;
  }

  std::cout << "Cantidad de goles: " << sum << std::endl
            << "Cantidad máxima de goles en un partido: " << maxGoles;

  return 0;
}
