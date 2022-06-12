/*"El pizzaron de Bart automático": Con las clases a distancia, el castigo de Bart de escribir lo 
mismo en el pizarron muchas veces paso a ser virtual. 
Cada vez que lo castigan debe escribir la misma palabra 100 veces. Necesita que le hagamos un sistema que reciba una palabra y 
la muestre por pantalla 100 veces para que Bart lo pueda usar cada vez que lo castigan.*/

#include <iostream>

using namespace std;

int main ()
{
    string pal;                                                  // declaro la variable donde almaceno la o las palabras
                             
    cout << "Ingrese la palabra que decia escribir 100 veces: ";
    cin >> pal;                                                  // almaceno en la variable la o las palabras ingresadas por el usuario   

    for(int i = 0; i < 100; i++)                                 // utilizo un for ya que conozco las veces que debe iterar
    {
        cout << pal << endl;                                     // muestro la palabra hasta que i=100
    }
    return 0;
}