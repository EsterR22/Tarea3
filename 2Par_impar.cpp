#include <iostream>
#include <conio.h>
//Determinar si un número es par o impar
using namespace std;
class Par_impar
{	int opc,result;
	public: 
	void ingresar()
		{system("cls");
		cout<<"\nIngrese un numero: ";
		cin>>opc;
		}
	void mostrar()
		{
		result=opc%2;
		if(result==0){cout<<"Es par\n\n";}else{cout<<"Es impar\n\n";}
		system("pause");
		system("cls");
		}
	
};
