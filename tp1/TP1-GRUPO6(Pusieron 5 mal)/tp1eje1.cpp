//"Puede entrar"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

int altura;

    cout<<"\n "<<setw(60)<< "+++ MONTANIA RUSA +++ " <<endl;

    cout<<"\n "<<setw(60)<<" Para acceder al juego digite su altura en cm por favor: \n"<<endl;

   cout<< "-----------------> Su altura es:  "; cin>>altura;

    if(altura<= 150){


        cout<< "\n  (Solo pueden subir aquellas personas que superen los 150 centimetros de altura)"<<endl;


    }
    else{


    cout<< "\n    .........Su altura esta permitida, puede pasar........ "<<endl;



    }

    return 0;

}