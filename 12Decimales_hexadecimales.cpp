#include <iostream>
//Conversión de números decimales a hexadecimales
using namespace std;
class Decimales_hexadecimales
{ int dig[20];
	int decimal,residuo,resultado,i;
	public :
		void ingresar()
		{system("cls");
		 cout<<"\nIntroduzca el numero en base 10:";
		 cin>>decimal;
		}		
		void mostrar()
		{	i=0;
			do
			{residuo=decimal%16;
			resultado=decimal/16;
			dig[i]=residuo;
			decimal=resultado;
			i++;
			}while(resultado>15);
			
			dig[i]=resultado;
			
			for(int j=i; j>=0; j--)
			{if(dig[j]==10){cout<<"A";}
			else if(dig[j]==11){cout<<"B";}
			else if(dig[j]==12){cout<<"C";}
			else if(dig[j]==13){cout<<"D";}
			else if(dig[j]==14){cout<<"E";}
			else if(dig[j]==15){cout<<"F";}
			else {cout<<dig[j];}
			}
		cout<<endl;
		system("pause");
		system("cls");
		}
};
