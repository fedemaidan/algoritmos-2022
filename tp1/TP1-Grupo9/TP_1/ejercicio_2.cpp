#include<iostream>

using namespace std;

int main() {

    /*
    CONSIGNA: "El pizzaron de Bart automático": Con las clases a distancia, el castigo de Bart de escribir lo mismo en el pizarron muchas veces paso a ser virtual. Cada vez que lo castigan debe escribir la misma palabra 100 veces. Necesita que le hagamos un sistema que reciba una palabra y la muestre por pantalla 100 veces para que Bart lo pueda usar cada vez que lo castigan.
    */
   
   char palabra_repetir[100];
   cout << "Ingrese la palabra: ";
   cin >> palabra_repetir;
   cout << "repeticion de palabras: " << endl;
   
   for(int iterador = 0; iterador<100; iterador++){
       cout << iterador+1 <<". : " <<palabra_repetir << endl;
   }

    return 0;
}