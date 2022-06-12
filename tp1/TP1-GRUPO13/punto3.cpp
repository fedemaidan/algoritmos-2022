#include <iostream>

using namespace std;

int main()
{
    int max = 0, goles = 0, suma = 0;
    bool aux;

    do
    {
        cout << "Cuantos goles metio Messi hoy? (Para finalizar ingrese un num. negativo):  ";
        cin >> goles;
        if (goles >= 0)
        {
            suma += goles;
        }
        if (max < goles)
            max = goles;

    } while (goles >= 0);

    cout << "Messi metio " << suma << " goles en total" << endl;
    cout << "La cantidad maxima de goles que metio en un partido fue de:" << max;

    return 0;
}