#include<iostream>

using namespace std;

int main(){

    int primer_valor;
    int segundo_valor;

    cin >> primer_valor;
    cin >> segundo_valor;

    if (primer_valor > segundo_valor)
        cout << "El primer valor es mayor que el segundo valor";
    else if (primer_valor == segundo_valor)
        cout << "El primer valor es igual al segundo valor";
    // else
    return 0;
}
