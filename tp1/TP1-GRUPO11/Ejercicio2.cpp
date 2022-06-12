#include <iostream>

using namespace std;

int main()
{

    char palabra[99];
    cout << "ingrese palabra: " << endl;
    cin >> palabra;

    for (int i = 0; i <= 100; i++)
    {
        cout << palabra <<"----Numero de palabra:"<<i <<endl;
    }
    

    return 0;
}