#include<iostream>

using namespace std;

int main(){

    /* Asignación interna */
    /* ¿Cómo sería con asignación externa? */
    int a = 1;
    int b = 2;
    int c = 3;

    /* Operadores de comparación */
    bool condicion_1 = a < a;
    bool condicion_2 = a <= a;
    bool condicion_3 = b > c;
    bool condicion_or = condicion_1 || condicion_2;
    bool condicion_and = condicion_1 && condicion_2;

    cout << "Probando operadores de comparación" << endl;

    cout << "Condición 1: " << condicion_1 << endl;
    cout << "Condición 2: " << condicion_2 << endl;
    cout << "Condición 3: " << condicion_3 << endl;
    cout << "Condición or: " << condicion_or << endl;
    cout << "Condición and: " << condicion_and << endl;

    /*
    Probando operadores de comparación
    Condición 1: ??
    Condición 2: ??
    Condición 3: ??
    Condición or: ??
    Condición and: ??

    */
    return 0;
}
