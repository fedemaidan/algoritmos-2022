#include <bits/stdc++.h>

/* El pizzaron de Bart automático
Con las clases a distancia, el castigo de Bart de escribir lo
mismo en el pizarron muchas veces paso a ser virtual. Cada vez
que lo castigan debe escribir la misma palabra 100 veces.
Necesita que le hagamos un sistema que reciba una palabra y la
muestre por pantalla 100 veces para que Bart lo pueda usar cada
vez que lo castigan.
*/

int main(int argc, char const *argv[])
{
  std::string palabra;
  std::cout << "Ingrese palabra: ";
  std::cin >> palabra;
  for (int i = 0; i < 100; i++)
  {
    if (i % 10 == 0)
      std::cout << std::endl;

    std::cout << palabra << " ";
  }

  return 0;
}
