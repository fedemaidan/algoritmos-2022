#include <iostream>
//"Puede entrar": Un parque de diversiones instaló una montaña rusa a la cual solo puede entrar personas que midan más de 150cm.
//Por lo cual nos piden hacer un sistema que reciba la altura de una persona e imprima por pantalla si esa persona puede entrar o no.
using namespace std;

int main()
{
    int altura;
    cout <<"Ingrese su altura" << endl;
    cin >> altura;
    if (altura <= 150){
        cout << "No puede ingresar" << endl;
    }
    else{
        cout << "Puede ingresar" << endl;
    }
    return 0;
}
