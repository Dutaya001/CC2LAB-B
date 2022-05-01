//Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto.
//Para realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto
//recibe el año leído por teclado, comprueba si es o no bisiesto
#include <iostream>
using namespace std;
int anio;
bool Bisiesto(int);

int main(){
	cout<<"Ingrese el año: ";
	cin>>anio;
	if(Bisiesto(anio)==true){
		cout<<"El años es bisiesto "<<endl;
	}
	else{
		cout<<"El ano no es  bisiesto"<<endl;
	}
	system("Pause");
	return 0;
}

bool Bisiesto(int anio){
	if(anio%4==0||anio%400==0||anio%100==0){
		return true;
	}
	else{
		return false;
	}
}
