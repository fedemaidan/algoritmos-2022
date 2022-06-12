#include <iostream>
using namespace std;

int main()
{
	string a;	
	int i;
	cout<<"Ingrese una palabra: "<< endl;
	
	cin >> a;
	
	for (i=0; i<=99; i++)
	{
		cout << i+1 << " "<< a <<endl; 
	}
	
	return 0;
}
