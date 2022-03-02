#include <iostream>
//Conversión de números decimales a binario
using namespace std;
class Decimales_binarios
{	int num[15],i,bin[15];
	public:
		void ingresar()
		{	system("cls");
			cout<<"\nIngrese un numero en base 10: ";
			cin>>num[0];
		}
		void mostrar()
		{cout<<"\n";
		if(num[0]==1) {cout<<1;}
		else if(num[0]==0) {cout<<0;}
		else {
		for(i=0; num[i]!=1; i++)
		{num[i+1]=num[i]/2;
		bin[i]=num[i]%2;
		if(num[i+1]==1)bin[i+1]=1;
		}
		for(int m=i; m>=0; m--)
		{cout<<bin[m];
		}
		}
		cout<<"\n";
		system("pause");
		system("cls");
		}
};
