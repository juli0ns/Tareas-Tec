#include "iostream"
using namespace std ;

int main ()
{
	//problema 1.4 resolver problema que tienen en una gasolinera.
	//los surtidores registran lo que surten en galones, pero el precio de la gasolina
	//esta fijado en "litros". el programa debe calcular lo que se debe cobrar al cliente
	//cada galon tiene 3.785 litros y el precio del litro es 8.20
	//declaracion de variables
	
   float GALONES, TOTAL;
   const float GALON=3.785, PRECIOLITRO=8.20;
   
   //entrada de datos 
   
   cout << "escribe cantida de galones comprados  " <<"\n";
   cin >> GALONES;
   
   //CALCULO
   TOTAL= GALONES * GALON * PRECIOLITRO;
   
   //SE IMPRIME RESULTADOS
   cout << "hay que cobrar al cliente por "<<GALONES<<" galones " << "debe pagar "<<TOTAL<<" pesos "< "\n";
   return 0;
}
