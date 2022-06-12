#include <iostream>
#include <string>

using namespace std;

int main(){

    int totalgoles, goles;
    int maxgoles=0;
    int i=0;
    do{
        cout<<"Ingrese los goles de messi por partido: "<<endl;
        cin>>goles;


    totalgoles= totalgoles + goles;
	if(goles > maxgoles){
		maxgoles = goles;
	}

    }while(goles>=0);
        cout<<"La cantidad total de goles de messi son: "<< totalgoles - goles<< endl;
		cout<<"La maxima cantidad de goles de messi en un partido son: "<< maxgoles<< endl;

    return 0;


}
