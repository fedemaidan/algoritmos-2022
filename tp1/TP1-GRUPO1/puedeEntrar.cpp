#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/* Puede entrar
Un parque de diversiones instaló una montaña rusa a la cual
solo puede entrar personas que midan más de 150cm. Por lo
cual nos piden hacer un sistema que reciba la altura de una
persona e imprima por pantalla si esa persona puede entrar o no.
*/

int main(int argc, char const *argv[])
{
  int altura;
  int alturaMin = 150;
  cout << "Ingrese altura: ";
  cin >> altura;
  if (altura > alturaMin)
	cout << "Puede entrar."<<endl;
  else
	cout << "No Puede entrar."<<endl;

  return 0;
}
