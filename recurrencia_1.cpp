#include<iostream>

using namespace std;

int main(){
    int numero;
    cout << "Hola! Podrías ingresar un número" << endl;
    cin >> numero;

    while (numero != 0) {
        int resto = numero % 2;
        if (resto == 0)
            cout << "Soy par" << endl;
        else
            cout << "Soy inpar" << endl;

        cout << "Ingrese otro número" << endl;
        cin >> numero;
    }

    cout << "Me fui" << endl;
    return 0;
}
