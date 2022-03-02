#include <iostream>
#include <conio.h>
#include <limits>
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#include <stdio.h>  
#include <windows.h> 
#include <cmath>
#include <iomanip>


using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

void menu(){
	system("cls");
	cout <<"Bienvenido"<<endl;
	cout <<"1.Suma, Resta, multiplicacion, division de dos numeros"<<endl;
	cout <<"2.Determinar si un numero es par o impar"<<endl;
	cout <<"3.Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y vicevesa"<<endl;
	cout <<"4.Determinar si una palabra o un numero es palindromo"<<endl;
	cout <<"5.Conversion de numero arabigos a romanos(minimo 1,000)"<<endl;
	cout <<"6.Conversion de numeros enteros a letras"<<endl;
	cout <<"7.Convercion de numeros enteros con decimales a letras"<<endl;
	cout <<"8.Una tabla de multiplicar"<<endl;
	cout <<"9.todas las tablas de multiplicar del 1 al 10"<<endl;
	cout <<"10.Crear de forma grafica la multiplicacion manual"<<endl;
	cout <<"11.Conversion de numero decimales a binario"<<endl;
	cout <<"12.convercion de numeros decimales a hexadecimales"<<endl;
	cout <<"14.mover un punto en toda la pantalla"<<endl;
	cout <<"15.Simulacion de un cajero Automata"<<endl;
	cout <<"16.Calcular la Hipotenusa"<<endl;
	cout <<"0. Para Salir"<<endl;
	
}

int main(){
	
	int op,opr;
	double nu1,nu2,result;
	string pal;
	
	
	do{
		system("cls");
		menu();
		cin >> op;
		if(op == 1){
			result =0;
			system("cls");
			cout <<"Seleccione su Operacion"<<endl;
			cout <<"1.SUMA"<<endl;
			cout <<"2.RESTA"<<endl;
			cout <<"3.MULTIPLICACION"<<endl;
			cout <<"4.DIVISION"<<endl;
			cin>>opr;
			system("cls");
			cout <<"Ingresa el Primer Numero"<<endl;
			cin>>nu1;
			cout <<"Ingresa el Primer Numero"<<endl;
			cin>>nu2;
			
			switch(opr){
				case 1 :
					 result=nu1+nu2;
					 cout<<"La suma de los Numeros es:"<<result<<endl;
					 getch();
					break;
				case 2 :
				     result=nu1-nu2;
					 cout<<"La resta de los Numeros es:"<<result<<endl;
					 getch();
					break;
				case 3 :
				     result=nu1*nu2;
					 cout<<"La Multiplicacion de los Numeros es:"<<result<<endl;
					 getch();
					break;
				case 4 :
					result=nu1/nu2;
					 cout<<"La Division de los Numeros es:"<<result<<endl;
					 getch();
					break;	
			}
		}
		
		
		if(op == 2){
			nu1=0;
			system("cls");
			cout <<"Ingresa un Numero"<<endl;
			cin>>nu1;
			
			if (nu1 / 2 == 0) {
	    	cout<<("Es par");
	 		 } else {
	    	cout<<("Es impar");
	  		};
			getch();
		}
		
		if(op == 3){
			nu1=0;
			system("cls");
			cout <<"Seleccione su Operacion"<<endl;
			cout <<"1.Kilometros a Millas"<<endl;
			cout <<"2.Metros a Pulgadas"<<endl;
			cout <<"3.Libras a Kilos"<<endl;
			cout <<"4.Millas a Kilometros"<<endl;
			cout <<"5.Pulgadas a metros"<<endl;
			cout <<"6.Kilos a libras"<<endl;
			cin>>opr;
			system("cls");
			
			switch(opr){
				case 1:
					cout <<"Ingresa los Kilometros"<<endl;
					cin>>nu1;
					double millas,rMilla;
			  		millas = 1.609;
			  		rMilla=nu1*millas;
			  		cout<<("El total de Millas es:")<<rMilla;
			  		getch();
					break;
				case 2:
					cout <<"Ingresa los Metros a Convertir"<<endl;
			     	cin>>nu1;
			     	double pulg,rpulgadas;
					pulg=39.3701;
					rpulgadas=nu1*pulg;
					cout<<("El total de pulgadas es:")<<rpulgadas;
					getch();
					break;
				case 3:
					cout <<"Ingresa las libras a Convertir"<<endl;
			     	cin>>nu1;
					double Kil,rKil;
					Kil=2.20462;
					rKil=nu1*Kil;
					cout<<("El total de Kilos es:")<<rKil;
					getch();
					break;
				case 4:
					double km,rkm;
					cout <<"Ingresa las millas a convertir"<<endl;
					cin>>nu1;
					km=1.6;
					rkm=nu1/km;
					cout<<("El total de kilometros es:")<<rkm;
					getch();
					break;
				case 5:
					cout <<"Ingresa las pulgadas a convertir"<<endl;
					cin>>nu1;
					double met, rmt;
					met=39.3701;
					rmt=nu1/met;
					cout<<("El total de metros es:")<<rmt;
					getch();
					break;
				case 6:
					double kl,rkl;
					cout <<"Ingresa los kilos a Convertir"<<endl;
			     	cin>>nu1;
			     	rkl=nu1/kl;
			     	cout<<("El total de libras es:")<<rmt;
					getch();
					break;
			}
			
		}
		
		if(op == 4){
			system("cls");
			cout<<"ingrese la palabra a evaluar"<<endl;
			cin>>pal;
			int aux = 0, igual = 0;    
	    	for(int ind = pal.length() - 1; ind >= 0; ind--) {
	        if(pal[ind] == pal[aux]) {
	            igual++;
	        }
	        aux++;
		    }
		    if(pal.length() == igual) {
		        cout << "La palabra ingresada es palindromo" << endl;
		    } else {
		        cout << "La palabra ingresada no es palindromo" << endl;
		    }
			getch();
		}
		
		if(op ==5){
		system("cls");
		int numero, unidades, decenas, centenas, millares;
 
		 cout<< "Ingrese un numero"<<endl;
		 cin>> numero;
		
		 unidades = numero % 10; numero /= 10;
		 decenas = numero % 10; numero /= 10;
		 centenas = numero % 10; numero /= 10;
		 millares = numero % 10; numero /= 10;
		
		 switch (millares)
		 {
		  case 1: cout<<"M"; break;
		  case 2: cout<<"MM"; break;
		  case 3: cout<<"MMM"; break;
		 }
		 
		 switch (centenas)
		 {
		  case 1: cout<<"C"; break;
		  case 2: cout<<"CC"; break;
		  case 3: cout<<"CCC"; break;
		  case 4: cout<<"CD"; break;
		  case 5: cout<<"D"; break;
		  case 6: cout<<"DC"; break;
		  case 7: cout<<"DCC"; break;
		  case 8: cout<<"DCCC"; break;
		  case 9: cout<<"CM"; break; 
		 }
		 
		 switch (decenas)
		 {
		  case 1: cout<<"X"; break;
		  case 2: cout<<"XX"; break;
		  case 3: cout<<"XXX"; break;
		  case 4: cout<<"XL"; break;
		  case 5: cout<<"L"; break;
		  case 6: cout<<"LX"; break;
		  case 7: cout<<"LXX"; break;
		  case 8: cout<<"LXXX"; break;
		  case 9: cout<<"XC"; break; 
		 }
		 
		 switch (unidades)
		 {
		  case 1: cout<<"I"; break;
		  case 2: cout<<"II"; break;
		  case 3: cout<<"III"; break;
		  case 4: cout<<"IV"; break;
		  case 5: cout<<"V"; break;
		  case 6: cout<<"VI"; break;
		  case 7: cout<<"VII"; break;
		  case 8: cout<<"VIII"; break;
		  case 9: cout<<"IX"; break;
		 }
		getch();
		}
		
		
		if(op ==6){
			system("cls");
			int x;
		    cout<<"ingrese un numero"<<endl;
		    cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
			else
		 
    	{
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
	       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
	       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
	       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
	       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
	       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
	       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
	       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
	       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
	       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
	        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
	            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
	            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
	            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
	            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
	            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
	            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
	            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
	            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
	            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
	            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
	            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
	            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
	            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
	            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
	            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
	        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
	       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
	       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
	       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
	       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
	       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
	       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
	        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
	        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
	        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
	            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
	       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
	       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
	       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
	       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
	       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
	       }
	    cout<<endl;	
	    getch();
		}
		
		if(op ==7){
			system("cls");
			char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
		    char cadenas2[4][10]={"","ciento ","dieci",""};
		 
		    int parteEntera,parteDecimal;
		    double num;
		 
		    do{
		        cout << "Introduce un numero (0 a 9999.99): ";
		        cin >> num;
		        if(num < LIMITE_INF || num >= LIMITE_SUP)
		            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
		    }while(num < LIMITE_INF || num >= LIMITE_SUP);
		 
		    parteEntera = num;
		    parteDecimal = (num-parteEntera)*100;
		 
		    string salida;
		 
		    int digitos[N_DIGITOS_ENTERO];
		    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
		        digitos[i]=parteEntera%10;
		 
		    for(int i=0; i<N_DIGITOS_ENTERO; i++){
		        bool compuesta=false;
		        switch(digitos[i]){
		            case 0: 
		                if(i==N_DIGITOS_ENTERO-1){
		                    for(int j=0;j<N_DIGITOS_ENTERO;j++){
		                        if(digitos[j] != 0){
		                            compuesta=true;
		                            break;
		                        }
		                    }
		                    if(!compuesta)
		                        salida += cadenas[i][digitos[i]];
		                }
		                break;
		            default:
		                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){
		                    if(digitos[j] != 0){
		                        compuesta=true;
		                        break;
		                    }
		                }
		                if(compuesta){
		                    if(digitos[i]==1 && i > 0){ 
		                        salida += cadenas2[i];
		                    }else if(digitos[i]==2 && i==DECENAS){
		                        salida += "veinti";
		                    }else{ 
		                        salida += cadenas[i][digitos[i]];
		                        if(i==DECENAS)
		                            salida += "y ";
		                    }
		                }else{ 
		                    salida += cadenas[i][digitos[i]];
		                }
		        }
		 
		    }

		    if(salida[salida.length()-1]!= ' ')
		        salida += " ";
		 
		    cout << salida << parteDecimal << "/100"<< endl;
		 	getch();
		    
		}
		
		if(op ==8){
			system("cls");
			int numero;
			do{
				cout<<"INGRESE UN NUMERO: ";
				cin>>numero;
				
			}while((numero<1) || (numero>10));
			
			for(int i=1; i<=10; i++){
				cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
			}
			getch();
		}
		
		if(op ==9){
			system("cls");
			for(int i=1; i<=10; i++)
			{
				for(int j=1; j<=10; j++){
					cout<<i<<" * "<< j << " = "<< i*j<<endl;
				
				}
			}
			getch();
		}
		
		if(op ==10){
				
				system("cls");
				gotoxy(10,2);cout<<"45";
				gotoxy(8,3);cout<<"X 32";
				gotoxy(8,4);cout<<"____";
				gotoxy(10,5);cout<<"90";
				gotoxy(8,6);cout<<"135";
				gotoxy(8,7);cout<<"____";
				gotoxy(8,8);cout<<"1440";
				
				getch();
		}
		
		if(op ==11){
			system("cls");
			int numero, exp, digito;
		    double binario;
			   cout << "Introduce numero: ";
			   cin >> numero;
			   exp=0;
			   binario=0;
			   while(numero/2!=0)
			   {
			           digito = numero % 2;
			           binario = binario + digito * pow(10.0,exp);
			           exp++;
			           numero=numero/2;
			   }
			   binario = binario + numero * pow(10.0,exp);
			   cout << fixed << setprecision(0);
			   cout << "binario: " << binario << endl;
		       getch();
		}
		
		
		
		if(op ==15){
			
		}
		
		if(op ==16){
			
		}
		
		
	}while(op != 0);

	

}
