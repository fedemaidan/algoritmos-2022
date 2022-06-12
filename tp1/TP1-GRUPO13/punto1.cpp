#include<iostream>
using namespace std;

int main ()
  {
    int altura;
    cout << "Ingrese su altura en cm (debe ser mayor a 150 cm para entrar): ";
    cin >> altura;
    if(altura>=150)
    {
      cout <<"Puede entrar.\n";
    }
    else
    {
      if(altura<150)
      {
        cout <<"No puede entrar.\n";
      }
    }
  return 0;
  }
