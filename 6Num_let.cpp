#include <iostream>
#include <conio.h>
//Conversión de números enteros a letras
using namespace std;
class Num_let{
	int numero,unidades,decenas,centenas,millares,num_mill;
	public: void ingresar()
	{system("cls");
	cout<<"\nIngrese un numero: ";
	cin>>numero;}
	void mostrar()
	{	num_mill=numero;		
		unidades = num_mill%10; /* 123[4] */ num_mill /= 10; //1234/10=123.4=123
		decenas  = num_mill%10; /* 12[3] */ num_mill /= 10; //123/100=12.3=12
		centenas = num_mill%10; /* 1[2] */ num_mill /= 10; //12/100=1.2=1
		millares = num_mill%10; /* [1] */ num_mill /= 10; //1/100=0.1=0
		cout<<"\n";		
		switch(millares)
		{case 1: cout<<"mil "; break;
		 case 2: cout<<"dos mil "; break;
		 case 3: cout<<"tres mil "; break;
		 case 4: cout<<"cuatro mil "; break;
		 case 5: cout<<"cinco mil "; break;
		 case 6: cout<<"seis mil "; break;
		 case 7: cout<<"siete mil "; break;
		 case 8: cout<<"ocho mil "; break;
		 case 9: cout<<"nueve mil "; break;
		}
		
		if(numero>999){numero-=(millares*1000);}
		if((numero<1)||(numero>999))cout<<""; else
		{if(numero>=900){cout<<"novecientos "; numero-=900;}
		else if(numero>=800){cout<<"ochocientos "; numero-=800;}
		else if(numero>=700){cout<<"setecientos "; numero-=700;}
		else if(numero>=600){cout<<"seiscientos "; numero-=600;}
		else if(numero>=500){cout<<"quinientos "; numero-=500;}
		else if(numero>=400){cout<<"cuatrocientos "; numero-=400;}
		else if(numero>=300){cout<<"trescientos "; numero-=300;}
		else if(numero>=200){cout<<"doscientos "; numero-=200;}
		else if(numero>100){cout<<"ciento "; numero-=100;}
		else if(numero==100){cout<<"cien "; numero-=100;}
		if(numero>90){cout<<"noventa y "; numero-=90;}
		if(numero==90){cout<<"noventa "; numero-=90;}
		if(numero>80){cout<<"ochenta y "; numero-=80;}
		if(numero==80){cout<<"ochenta "; numero-=80;}
		if(numero>70){cout<<"setenta y "; numero-=70;}
		if(numero==70){cout<<"setenta "; numero-=70;}
		if(numero>60){cout<<"sesenta y "; numero-=60;}
		if(numero==60){cout<<"sesenta "; numero-=60;}
		if(numero>50){cout<<"cincuenta y "; numero-=50;}
		if(numero==50){cout<<"cincuenta "; numero-=50;}
		if(numero>40){cout<<"cuarenta y "; numero-=40;}
		if(numero==40){cout<<"cuarenta "; numero-=40;}
		if(numero>30){cout<<"treinta y  "; numero-=30;}
		if(numero==30){cout<<"treinta "; numero-=30;}
		if(numero>20){cout<<"veinti "; numero-=20;}
		if(numero==20){cout<<"veinte "; numero-=20;}
		if(numero>=16){cout<<"dieci"; numero-=10;}
		else if(numero==15){cout<<"quince "; numero-=15;}
		else if(numero==14){cout<<"catorce "; numero-=14;}
		else if(numero==13){cout<<"trece "; numero-=13;}
		else if(numero==12){cout<<"doce "; numero-=12;}
		else if(numero==11){cout<<"once "; numero-=11;}
		else if(numero==10){cout<<"diez "; numero-=10;}
		else if(numero==9){cout<<"nueve "; numero-=9;}
		else if(numero==8){cout<<"ocho "; numero-=8;}
		else if(numero==7){cout<<"siete "; numero-=7;}
		else if(numero==6){cout<<"seis "; numero-=6;}
		else if(numero==5){cout<<"cinco "; numero-=5;}
		else if(numero==4){cout<<"cuatro "; numero-=4;}
		else if(numero==3){cout<<"tres "; numero-=3;}
		else if(numero==2){cout<<"dos "; numero-=2;}
		else if(numero==1){cout<<"uno "; numero-=1;}
		}
		cout<<"\n";
		system("pause");
		system("cls");
	}
};
