#include <iostream>

using namespace std;

int main(){
float goles;
int max,suma;
suma = 0;
max = 0;
goles =0;

while (goles>=0)
{
     suma = suma + goles;
    cout<<"Cuantos goles metio Messi este partido?"<<endl;
    cin>>goles;
    if (goles>max)
         max=goles;
      
}
cout << "El maximo de goles fue:" << max << endl;
cout << "La suma de todos es:"<< suma << endl;
    return 0;
}