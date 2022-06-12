#include<iostream>

using namespace std;

int main(){

    /* Código asci */
    char letra = 'a';
    int avanzar;

    cout << "Avanzar tantos casilleros desde la letra a: " << endl;

    cin >> avanzar;
    avanzar += letra;

    cout << "La letra siguiente es: " << avanzar << endl;

    /*
        Probando siguiente letra
        La letra siguiente es: ???
    */

   /*
    ¿Cómo podemos hacer para que pueda avanzar más lugares?
   */
    return 0;
}
