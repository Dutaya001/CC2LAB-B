//Hacer un programa que lea por teclado un a�o, calcule y muestre si es bisiesto.
//Para realizar el c�lculo utiliza una funci�n llamada bisiesto. La funci�n bisiesto
//recibe el a�o le�do por teclado, comprueba si es o no bisiesto
#include <iostream>
using namespace std;
int anio;
bool Bisiesto(int);

int main(){
	cout<<"Ingrese el a�o: ";
	cin>>anio;
	if(Bisiesto(anio)==true){
		cout<<"El a�os es bisiesto "<<endl;
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
