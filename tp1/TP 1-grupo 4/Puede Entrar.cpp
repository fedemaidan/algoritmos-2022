/*"Puede entrar": Un parque de diversiones instaló una montaña rusa a la cual 
solo puede entrar personas que midan más de 150cm. Por lo cual nos piden hacer 
un sistema que reciba la altura de una persona e imprima por pantalla si esa 
persona puede entrar o no.*/

#include <iostream>
using namespace std;

int main() 
{
	cout<<"ingrese su altura en cm:"<<endl;
	int a;
	cin>>a;
	
	if (a>150)
	
	cout<<"puede pasar";
	
	else
	
	cout<<"no puede pasar";
	
	
	return 0;
}

