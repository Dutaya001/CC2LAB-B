//Escribir un programa que pida al usuario un n�mero entero y muestre por pantalla 
//un tri�ngulo rect�ngulo como el de m�s abajo, de altura el n�mero introducido. 
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	for(int i=0;i<numero;i++){
		for(int j=0;j<i;j++){
			cout<<"*"; 
		}
		cout<<endl;
	}
	return 0;
}
	
