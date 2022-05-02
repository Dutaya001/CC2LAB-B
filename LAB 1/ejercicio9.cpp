//Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.
#include <iostream>
using namespace std;

int main(){
	float Lista[10];
	int cont;
	for(int i=0;i<10;i++){
		cout<<"Numero ["<<i+1<<"]: ";
		cin>>Lista[i];
	}
	for(int j=0;j<10;j++){
		if(Lista[j]<0){
			cont+=Lista[j];
		}
	}
	cout<<"La suma es "<<cont;
}
