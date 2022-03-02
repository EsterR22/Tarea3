#include <iostream>
#include <string>
#include <conio.h>
//Determinar si una palabra o un número es palíndromo
using namespace std;
class Palindromo
{	string palabra;
	public: 
	void ingresar()
		{system("cls");
		cout<<"\nIngrese una palabra: ";
		cin>>palabra;
		}
	bool palin(string pal)
		{int i=0, j=pal.size()-1;
		while(i<j)
		{if (pal[i] != pal[j])
		return false;
		i++; j--;
		}
		return true;
		}
	void mostrar()
		{if(palin(palabra)==true)cout<<"\nEs palindromo\n\n";
		else cout<<"\nNo es palindromo\n\n";
		system("pause");
		system("cls");
		}
};
