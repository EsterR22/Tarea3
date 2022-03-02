#include "1Operaciones.cpp"
#include "2Par_impar.cpp"
#include "3Conversor.cpp"
#include "4Palindromo.cpp"
#include "5Arabigos_Romanos.cpp"
#include "6Num_let.cpp"
#include "7Num_letras_dec.cpp"
#include "8Tabla.cpp"
#include "9Tablas.cpp"
#include "10Tabla_grafica.cpp"
#include "11Decimales_binarios.cpp"
#include "12Decimales_hexadecimales.cpp"
#include "13Figuras.cpp"
#include "14Movimiento.cpp"
#include "15Cajero.cpp"
#include "16Hipotenusa.cpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int main(){
int Opcion;
int s;
do{ cout<<"Ingrese una opcion de lo que desea";
	cout<<"\n[1]Suma, Resta, Multiplicaci�n y Divisi�n de dos n�meros";
	cout<<"\n[2]Determinar si un n�mero es par o impar";
	cout<<"\n[3]Convertir de kil�metros a millas, metros a pulgadas, de libras a kilos y viceversa";
	cout<<"\n[4]Determinar si una palabra o un n�mero es pal�ndromo";
	cout<<"\n[5]Conversi�n de n�meros ar�bigos a romanos (m�nimo 1,000)";
	cout<<"\n[6]Conversi�n de n�meros enteros a letras";
	cout<<"\n[7]Conversi�n de n�meros enteros con decimal a letras";
	cout<<"\n[8]Una tabla de multiplicar";
	cout<<"\n[9]Todas las tablas de multiplicar del 1 al 10";
	cout<<"\n[10]Crear de forma gr�fica la multiplicaci�n manual";
	cout<<"\n[11]Conversi�n de n�meros decimales a binario";
	cout<<"\n[12]Conversi�n de n�meros decimales a hexadecimales";
	cout<<"\n[13]Crear Figuras Geom�tricas B�sicas";
	cout<<"\n[14]Mover un punto en toda la pantalla";
	cout<<"\n[15]Simulaci�n de un Cajero (Aut�mata)";
	cout<<"\n[16]Calcular la hipotenusa"<<endl<<"[17]Salir"<<endl;
	cin>>Opcion;
	switch (Opcion)
	{case 1:{Operaciones Respuesta;	Respuesta.ingresar();	Respuesta.mostrar();break;}
	 case 2:{Par_impar a; a.ingresar(); a.mostrar(); break;}
	 case 3:{Conversor b; b.ingresar(); b.mostrar(); break;}
	 case 4:{Palindromo c; c.ingresar();	c.mostrar(); break;}
	 case 5:{Arabigos_Romanos d; d.ingresar(); d.mostrar(); break;}
	 case 6:{Num_let e; e.ingresar(); e.mostrar(); break;}
	 case 7:{Num_letras_dec f; f.ingresar(); f.mostrar(); break;}
	 case 8:{Tabla g; g.ingresar(); g.mostrar(); break;}
	 case 9:{Tablas h; h.mostrar(); break;}
	 case 10:{Tabla_grafica i; i.ingresar(); i.mostrar(); break;}
	 case 11:{Decimales_binarios j; j.ingresar(); j.mostrar();break;}
	 case 12:{Decimales_hexadecimales k; k.ingresar(); k.mostrar(); break;}
	 case 13:{Figuras l; l.ingresar(); l.mostrar(); break;}
	 case 14:{Movimiento m; m.mostrar(); break;}
	 case 15:{Cajero n; n.ingresar();  break;}
	 case 16:{Hipotenusa o; o.ingresar(); o.mostrar(); break;}
	 case 17:{system("cls");cout<<"Seguro que quieres salir\n[1]Si [2]Volver al menu: ";
				cin>>s;  if(s==1){return 0;} else{return main();}break;}
	}
}while(Opcion!=17);
return main();
}
	
