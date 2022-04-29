//Escribir un programa que genere la tabla de multiplicar de un número introducido por el teclado
#include <iostream>
using namespace std;

int main() {
	int number;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>number;
		
	}while((number<1) || (number>12));
	
	for(int i=1; i<=12; i++){
		cout<<number<<" * "<<i<<" = "<<number * i<<endl;
	}
	return 0;
}
