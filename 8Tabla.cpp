#include <iostream>
//Una tabla de multiplicar
using namespace std;
class Tabla
{	int tabla,respuesta;
	public:
		void ingresar()
		{system("cls");
			cout<<"\nIngrese el valor de la tabla que desea ver: ";
			cin>>tabla;
		}
		void mostrar()
		{int i,j;
			for(i=1; i<=10; i++)
			{
				cout<<tabla<<"*"<<i<<"="<<i*tabla<<"\n";
			}
		cout<<"\n";
		system("pause");
		system("cls");
		}
};
