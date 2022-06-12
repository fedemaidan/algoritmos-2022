#include<iostream>

using namespace std;

int main() {

    /*
    CONSIGNA: "Puede entrar": Un parque de diversiones instaló una montaña rusa a la cual solo puede entrar personas que midan más de 150cm. Por lo cual nos piden hacer un sistema que reciba la altura de una persona e imprima por pantalla si esa persona puede entrar o no.
    */
   int altura;

   cout << "Ingrese la altura de la persona (en centimetros): ";
   cin >> altura;

   if (altura > 150) cout << "La persona puede ingresar";
   else cout << "La persona no puede ingresar";

    return 0;
}