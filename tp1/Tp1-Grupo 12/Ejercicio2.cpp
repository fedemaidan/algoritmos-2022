#include <iostream>
/*"El pizzaron de Bart automático": Con las clases a distancia, el castigo de Bart de escribir lo mismo en el pizarron muchas veces paso a ser virtual.
Cada vez que lo castigan debe escribir la misma palabra 100 veces.
Necesita que le hagamos un sistema que reciba una palabra y la muestre por pantalla 100 veces para que Bart lo pueda usar cada vez que lo castigan.*/
using namespace std;

int main()
{
    int i=1;
    char palabra[50];

    cout << "Ingrese la palabra a repetir" << endl;
    cin >> palabra;
    for(i;i<=100;i++){
        cout << palabra << " ";
    }
    return 0;
}
