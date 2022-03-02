#include <iostream>
#include <conio.h>
 //Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa
using namespace std;
class Conversor
{	float resp,km,mi,met,pulg,lb,kl;
	public:	
	void ingresar()
		{system("cls");
		cout<<"\nIngrese el valor que desea convertir: ";
		cin>>resp;
		}
	void mostrar()
		{km=resp/0.621371; //1k = 0.621371 millas´
		mi=resp/1.609344; //1mi = 1.609344 kilometros
		pulg=resp/39.37; //1me = 39.37 pul
		met=resp/0.0254; //1pulg = 0.0254 met
		lb=resp/0.453592; //1lb = 0.453592 kl
		kl=resp/2.20462; //1kl= 2.20462lb
		cout<<"[1]"<<resp<<"km = "<<km<<"mi\t";
		cout<<"[2]"<<resp<<"mi = "<<mi<<"km\n";
		cout<<"[3]"<<resp<<"met = "<<pulg<<"pulg\t";
		cout<<"[4]"<<resp<<"pulg = "<<met<<"met\n";
		cout<<"[5]"<<resp<<"lb = "<<kl<<"kl\t";
		cout<<"[6]"<<resp<<"kl = "<<lb<<"lb\n\n";
		system("pause");
		system("cls");
		}
};
