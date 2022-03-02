#include <iostream>
#include <math.h>
//Calcular la hipotenusa
using namespace std;
class Hipotenusa
{	int c_opuesto,c_adyacente;
	float hipotenusa;
	public :
	void ingresar()
		{system("cls");
		cout<<"Ingrese el valor del cateto Opuesto: ";
		cin>>c_opuesto;
		cout<<"Ingrese el valor del cateto Adyacente: ";
		cin>>c_adyacente;
		}
	void mostrar()
		{hipotenusa=sqrt(pow(c_opuesto,2)+(c_adyacente,2));
		cout<<"La hipotenusa es: "<<hipotenusa<<endl;
		system("pause");
		system("cls");			
		}
};
