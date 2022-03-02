#include <iostream>
//Todas las tablas de multiplicar del 1 al 10
using namespace std;
class Tablas
{	int i,j;
	public:
		void mostrar()
		{system("cls");
			for(i=1; i<=10; i++)
			{
				for(j=1; j<=10; j++)
				{
					cout<<i<<"*"<<j<<"="<<i*j<<"\n";
				}
				cout<<"_____________\n";
			}
		cout<<"\n";
		system("pause");
		system("cls");
		}
};
