#include <windows.h>
#include <conio.h>
#include <iostream>
//Mover un punto en toda la pantalla
using namespace std;
void gotoxy(int x1,int y1);
int x,y;
char opcion;
class Movimiento
{	public :
	void mostrar()
	{x=30; y=12;
		while(opcion!='a')
		{	system("cls");
			gotoxy(0,0); cout<<"[1]Derecha\t[3]Izquierda\t[5]Arriba\t[3]Abajo\t[a]Menu principal";
			gotoxy(x,y); cout<<"*";
	 		opcion=getch();
	 		switch(opcion)
			{case 53:	y--; break;
			 case 50:	y++; break;
			 case 49:	x--; break;
			 case 51:	x++; break;
			}
		}
		system("cls");
	}
};void gotoxy(int x1,int y1)
{  	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x1;  
    dwPos.Y= y1;  
    SetConsoleCursorPosition(hcon,dwPos);  
}
