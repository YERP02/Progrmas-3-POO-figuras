#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;
/*
class square{
	
	int row;
	int column;
};*/

void cuadrado() {

	int n, t ;
   char simbolo='*';
   
   cout << " Introduzca un numero de lados: " ;
   cin >> n ;
   cout<<"eliga tipo de cuadrado: "<<endl<<"1)lleno "<<endl<<"2)hueco"<<endl;
   cin>>t;
   if(t == 1){
   	
	   	for (int j=0; j<n ; ++j) {
	   	
	      for (int i=0; i<n ; ++i) {
	      	
	         cout << simbolo ;
	      }
	      cout << endl;
	   	}
   	
	}else{
		
	    for (int i = 1; i <= n; i++) {
	    	
        for (int j = 1; j <= n; j++) {
        	
            if (i == 1 || i == n || j == 1 || j == n){
            	cout<<simbolo;
                //printf("* ");
            }else{
            	cout<<" ";
                //printf(" ");
            }
        }
		
        printf("\n");
    	}
	}
}

void triangulo(){
	int lado, i, j ;
   char simbolo='*';
   
   cout << " Introduzca un numero de los lados del Triangulo: " ;
   cin >> lado ;
   
   for (i = 1; i <= lado; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout<<("*");
        }
        cout<<endl;
    }
}

void circulo(){
	
	int x, y, radio;
    cout<<("Ingresar el radio del circulo: ")<<endl;
    cin>>radio;
    
    for (x = 0; x <= radio * 2; x++)
    {
        for (y = 0; y <= radio * 2; y++) 
        {
        	if(pow(y-radio,2)+pow(x-radio,2) <= pow(radio,2))
        	cout<<"*";
        	else
        	cout<<" ";
            
        }
        cout<<endl;

    }
}

int main(){
	
	int opc;
	
	//draw();
	do{
	system("cls");
	//opciones
		cout<<endl<<"1.-Cudrado "<<endl;
		cout<<"2.-Triangulo "<<endl;
		cout<<"3.-Circulo "<<endl;
		cout<<"0.-Salir "<<endl;
		cin>>opc;
		
		//menu
		switch(opc)
		{
				
			case 1:
				
				cuadrado();
				
				break;
			
			case 2:
				
				triangulo();
				
				break;
			
			case 3:
				
				circulo();
				
				break;
			
			case 0:
				system("cls");
				printf("\t\tFin del Programa.\n\n");
				break;
				
			default:
				system("cls");
				printf("\t\tOpcion incorrecta intente de nuevo\n");
				
				break;	
		}
		system("pause");		
	}while(opc != 0);
	
	
	return 0;
}
