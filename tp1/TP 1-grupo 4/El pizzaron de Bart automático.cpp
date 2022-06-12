/*"El pizzaron de Bart automático": Con las clases a distancia, el castigo de Bart 
de escribir lo mismo en el pizarron muchas veces paso a ser virtual. Cada vez que
lo castigan debe escribir la misma palabra 100 veces. Necesita que le hagamos un 
sistema que reciba una palabra y la muestre por pantalla 100 veces para que Bart 
lo pueda usar cada vez que lo castigan.*/

#include <iostream>
using namespace std;

int main()
{
	cout<<"ingrese una palabra:"<<endl;
	string a;
	int i;
	cin>>a;
	
	for (i=0;i<100;i++)
	{
		cout<<a<<" ";
	}
	
return 0;	
}