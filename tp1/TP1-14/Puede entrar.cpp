#include <iostream>
using namespace std;

int main()
{
	int i, altura;
	
	cout<<"Bienvenidos a la monta�a rusa, por favor ingrese su altura en cm: "<< endl;
	
	
	for (i=0; i<10; i++)
	{
		cin >> altura;
		
	if (altura>=150)
    	{
		    cout<<"Adelante, puede ingresar, que lo disfrute!"<< endl;
	    }
	else
    	{
	    	cout<<"No cumple con la altura permitida "<< endl;
	    }	
	    
		cout<<"Bienvenidos a la monta�a rusa, por favor ingrese su altura en cm: "<< endl;
	}
	
	
	return 0;
}
