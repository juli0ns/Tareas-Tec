#include "iostream"
using namespace std;

int main()
{
	//problema 1.6 
	int DIAS;
	float SEGUNDOS;
	
	//entrada de datos
cout <<"escribe el numero de dias para calcular los segundos" << "\n";
cin >> DIAS;

//CALCULO
SEGUNDOS= DIAS * 24 * 60 * 60;

//SE IMPRIME RESULTADOS
cout << "en "<<DIAS<<" dias, hay " <<SEGUNDOS<< " segundos" << "\n";

return 0;

}
