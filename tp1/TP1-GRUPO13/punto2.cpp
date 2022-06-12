#include<iostream>
using namespace std;

int main ()
  {
      string palabra;
      cout <<"Ingrese la palabra"<<endl;
      cin>>palabra;

      for (int i =1;i<=100;i++)
      {
          cout<<i<<" - "<<palabra<<endl;
      }
      return 0;

  }