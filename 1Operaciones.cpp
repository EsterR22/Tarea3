#include <iostream>
#include <conio.h>
//Suma, Resta, Multiplicación y División de dos números
using namespace std;
class Operaciones
{	float a,b;
	public :
	void ingresar()
		{system("cls");
		cout<<"\nIngrese num1: ";
		cin>>a;
		cout<<"Ingrese num2: ";
		cin>>b;
		}
	void mostrar()
		{cout<<a<<"+"<<b<<"="<<a+b<<"\t";
		cout<<a<<"-"<<b<<"="<<a-b<<"\t";
		cout<<a<<"*"<<b<<"="<<a*b<<"\t";
		cout<<a<<"/"<<b<<"="<<a/b<<"\n\n";
		system("pause");
		system("cls");
		}
};
