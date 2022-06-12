#include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    int c;

    /* ¿Cómo sería con asignación externa? */
    cout << "Cargar el valor a: " << endl;
    cin >> a;

    cout << "Cargar el valor b: " << endl;
    cin >> b;

    cout << "Cargar el valor c: " << endl;
    cin >> c;

    /* Operadores de comparación */
    bool condicion_1 = a < a;
    bool condicion_2 = a <= a;
    bool condicion_3 = b > c;
    bool condicion_or = condicion_1 || condicion_2;
    bool condicion_and = condicion_1 && condicion_2;

    cout << "Probando operadores de comparación" << endl;

    cout << "Condición 1: " << condicion_1 << endl; // Condición 1: ( falso  | 0 )
    cout << "Condición 2: " << condicion_2 << endl; // Condición 2: ( verdadero  | 1 )
    cout << "Condición 3: " << condicion_3 << endl; // Condición 3: ( falso  | 0 )
    cout << "Condición or: " << condicion_or << endl; // Condición 4: ( verdader  | 1 )
    cout << "Condición and: " << condicion_and << endl; // Condición 5: ( falso  | 0 )


    if (condicion_and) {
        cout << "Condición and: VERDADERO" << endl;
    }
    else {
        cout << "Condición and: FALSO" << endl;
    }

    return 0;
}
