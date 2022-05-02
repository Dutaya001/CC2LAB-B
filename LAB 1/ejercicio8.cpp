
//Escribir un programa que calcule la media de x cantidad números introducidos por el teclado.
#include <iostream>
using namespace std; 
int main(){
	int numeros;
	int cont;
	cout<<"Cantidad elementos para hallar la media: ";
	cin>>numeros;
	int Lista[numeros];
	for(int i=0;i<numeros;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>Lista[i];
	}
	for(int i=0;i<numeros;i++){
		cont+=Lista[i];
	}
	cout<<"La media es: "<<cont/numeros; 
}
