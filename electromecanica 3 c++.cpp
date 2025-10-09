#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1,CAL2,CAL3,CAL4,CAL5;
	//mensaje de bienvenida 
	cout << "hola este es el problema 3" << "\n";
	 //se pide la MATRICULA DEL ALUMNO
	 cout <<"ingrese la matricula del alumno" << "\n";
	 //se asigna el primer valor MAT
	 cin >>MAT; 
	 //se pide la primera calificacion
	 cout << "ingresa la primera calificacion:" << "\n";
	 //se asigna el primer valor a CAL1
	 cin >>CAL1;
	 //se pide la segunda calificacion
	   cout <<"ingresa la segunda calificacion" << "\n";
	 //se asigna el primer valor a CAL2
	 cin >> CAL2;
	 //se pide la tercera calificacion
	 cout << "ingresa la tercera calificacion: " << "\n";
	 //se asigna el primer valor a CAL3
	 cin >> CAL3;
	 //se pide la cuarta calificacion
	 cout << "ingresa la cuarta calificacion:" << "\n";
	 //se asigna el primer valor a CAL4
	 cin >> CAL4;
	  //se pide la quinta calificacion
	  cout << "ingresa la quinta calificacion:" << "\n";
	  //se asigna el primer valor a CAL5
	  cin >>CAL5;
	  PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	  //se muestra el resultado. 
	  printf ("\n el promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
	  cout << "\n El promedio del alumno con matricula " << MAT <<" es "<<PRO << "\n";
	  return 0;	  
}
