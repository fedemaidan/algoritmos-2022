#include<iostream>

using namespace std;

int main() {

    /*
    CONSIGNA: 3. "Estadística de goles de Messi". Tenemos un amigo que quiere tomar estadísticas de los goles de Messi y necesita un sistema que le ayude a hacer eso ya que no le gustan las calculadoras. Necesita que le hagamos un sistema que en el cual el vaya poniendo los goles que hizo Messi y los vaya sumando hasta finalizar cuando recibe un número negativo. En ese momento imprimir por pantalla la sumatoria de todos los goles y cual fue la cantidad máxima de goles que metió en un partido.
    - **Aclaración**: Solo quiere cargar los goles. Es decir, el número.
    */

   int suma_goles=0, goles, max_goles=0;
    
   cout << "Ingrese la cantidad de goles en el partido: ";
   cin >> goles;
   if (goles > 0){
       max_goles = goles;
       suma_goles = goles;
   }

   while(goles > 0){
       cout << "Ingrese la cantidad de goles en el partido: ";
       cin >> goles;
       if (goles > 0){
           if (goles > max_goles) max_goles = goles;
           suma_goles += goles;
       }
   }

   cout << "sumatoria de goles: " << suma_goles << "\nmax goles: " << max_goles << endl;

    /*
    //TAMBIEN SE PUEDE CONSEGUIR USANDO DO WHILE
    do{
        cout << "Ingrese la cantidad de goles en el partido: ";
        cin >> goles;
        if (goles > 0){
            if (goles > max_goles) max_goles = goles;
            suma_goles += goles;
        }
    } while (goles > 0);
    cout << "sumatoria de goles: " << suma_goles << "\nmax goles: " << max_goles << endl;
    */
    return 0;
}