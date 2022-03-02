#include <iostream>
//Simulación de un Cajero (Autómata)
using namespace std;
class Cajero
{
	int opcion,sn;
	float saldo,depositar,retirar;
	public :
		//do{
		void ingresar()
		{system("cls");
		cout<<"Bienvenido"<<endl;
		cout<<"[1]Depositar"<<endl<<"[2]Retirar"<<endl<<"[3]Ver Saldo"<<endl;	
		cin>>opcion;
		return mostrar();
		}
		void mostrar()
		{
			switch(opcion)
			{case 1:
				{system("cls"); cout<<"Ingrese el monto que depositara: ";
				cin>>depositar;
				saldo+=depositar;
				break;
				}
			case 2:
				{system("cls"); cout<<"Ingrese el monto que retirara: ";
				cin>>retirar;
				saldo-=retirar;		
				break;
				}
			case 3:
				{system("cls"); cout<<"Su saldo es de : "<<saldo<<endl;
				break;
				}
			}
		cout<<endl<<"Desea realizar otra transacción [1]si [2]no";
		cin>>sn;
		if(sn==2){system("cls"); system("pause");}
		else {return ingresar();}	
		}
		
};
