/*Un parque de diversiones instaló una montaña rusa a la cual solo puede entrar personas que midan más de 150cm. 
Por lo cual nos piden hacer un sistema que reciba la altura de una persona e imprima por pantalla si esa persona puede entrar o no.*/

#include <iostream>

using namespace std;

int main ()
{
    int alt;                                       // Declaro la variable donde almaceno la altura de la persona

    cout << "Ingrese su altura en centimetros: ";  
    cin >> alt;                                    // Almaceno la altura ingresada

    if(alt > 150)                                  // Compruebo si es mayor a 150cm
        cout << "Usted puede pasar a la montaña rusa " << endl;
    else                                                                // Si no se cumple el if, va al caso contrario
        cout << "Usted no puede pasar a la montaña rusa, no cumple los requisitos " << endl;

    return 0;
}