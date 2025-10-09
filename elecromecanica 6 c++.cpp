#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	//problema 1.7 diagrama de flujo para determinar el area de un triangulo por medio 
	//de los 3 lados de el triangulo
	
	float L1,L2,L3,S,AREA;
	const float PI=3.141592;
	
	//entrada de datos
	cout <<" escribe la primer medida del triangulo " << "\n";
	cin >> L1;
	
	cout << " escribe la segunda medida del triangulo " << "\n";
	cin >> L2;
	
    cout << "escribe la tercer medida del triangulo " << "\n";
    cin >> L3;
    
    //CALCULO 
    S= (L1+L2+L3)/2;
    AREA=sqrt(S *(S-L1)*(S-L2)*(S-L3));
    
    //SE IMPRIMEN RESULTADOS
    cout << "el area del rectangulo es "<<AREA<< "\n";
    
    return 0;
    
}
