#include <iostream>
#include <conio.h>
//Conversión de números arábigos a romanos (mínimo 1,000)
using namespace std;
class Arabigos_Romanos
{
	int numero,unidades,decenas,centenas,millares;
	public: 
	void ingresar()
		{system("cls");
		cout<<"\nDigite un numero de 1 a 1000 para convertir de arabigo a romano: ";
		cin>>numero;
		}
	void mostrar()
		{unidades = numero%10; /* 123[4] */ numero /= 10; //1234/10=123.4=123
		decenas  = numero%10; /* 12[3] */ numero /= 10; //123/100=12.3=12
		centenas = numero%10; /* 1[2] */ numero /= 10; //12/100=1.2=1
		millares = numero%10; /* [1] */ numero /= 10; //1/100=0.1=0
		switch(millares)
			{case 1: cout << "M"; break;}
		switch(centenas)
			{case 1: {cout << "C"; break;}
			case 2: {cout << "CC"; break;}
			case 3: {cout << "CCC"; break;}
			case 4: {cout << "CD"; break;}
			case 5: {cout << "D"; break;}
			case 6: {cout << "DC"; break;}
			case 7: {cout << "DCC"; break;}
			case 8: {cout << "DCCC"; break;}
			case 9: {cout << "CM"; break;}
			}
		switch(decenas)
			{case 1: {cout << "X"; break;}
			case 2: {cout << "XX"; break;}
			case 3: {cout << "XXX"; break;}
			case 4: {cout << "XL"; break;}
			case 5: {cout << "L"; break;}
			case 6: {cout << "LX"; break;}
			case 7: {cout << "LXX"; break;}
			case 8: {cout << "LXXX"; break;}
			case 9: {cout << "XC"; break;}
			}
		switch(unidades)
			{case 1: {cout << "I"; break;}
			case 2: {cout << "II"; break;}
			case 3: {cout << "III"; break;}
			case 4: {cout << "IV"; break;}
			case 5: {cout << "V"; break;}
			case 6: {cout << "VI"; break;}
			case 7: {cout << "VII"; break;}
			case 8: {cout << "VIII"; break;}
			case 9: {cout << "IX"; break;}
			}
		cout<<"\n";
		system("pause");
		system("cls");
		}
};
