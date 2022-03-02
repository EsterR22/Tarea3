#include <iostream>
/*Crear de forma gráfica la multiplicación manual
                          45
                       X 32
                         90  
                     135  
                   1440*/
using namespace std;
class Tabla_grafica
{	int numero1,numero2,numero3,unidad,decena;
	int a,b;
	public :
		void ingresar()
		{system("cls");
		cout<<"\nIngrese 2 numeros de 1 a 99";
		 cout<<"\nIngrese primer numero: ";
		 cin>>numero1;
		 cout<<"\nIngrese segundo numero: ";
		 cin>>numero2;	
		}
		void mostrar()
		{	
		numero3=numero2;
		unidad = numero3%10; /* 123[4] */ numero3 /= 10; //1234/10=123.4=123
		decena  = numero3%10; /* 12[3] */
		cout<<"     "<<numero1;
		cout<<"\n  x  "<<numero2;
		cout<<"\n ______";
		a=unidad*numero1;
		cout<<"\n    "<<a; 
		b=decena*numero1;
		cout<<"\n  "<<b;
		cout<<"\n_______";
		cout<<"\n  "<<a+b*10;
		cout<<"\n";
		system("pause");
		system("cls");
		}
};
