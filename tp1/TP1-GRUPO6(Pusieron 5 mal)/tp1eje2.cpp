//"El pizzaron de Bart automático"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 char palabra[100];

    cout<< "\n" <<setw(60)<<" ++++ EL PIZARRON PARA BART ++++" << endl;

    cout<< "\n"<<setw(40)<<" Escriba la palabra que se desea repetir en el pizarron : "; cin>>palabra;

    cout<<"\n";
    for(int num =1; num<=100; num++){


        cout<<" "<<palabra;



    }


    return 0;
}