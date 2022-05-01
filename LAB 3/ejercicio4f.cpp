//Hacer un programa que desarrolle una función, que genere en pantalla el listado de números primos ubicados entre
// 1 hasta un numero x (x es ingresado por teclado)

#include <iostream>
using namespace std;
int num;
int cont=0;
bool Esprimo(int);
int main(){
	cout<<"Numero: ";cin>>num;
	while(Esprimo(num)==true){
		cout<<Esprimo(num);
	}
	return 0;
}
bool Esprimo(int num){
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont==2){
			return true;
		}
		else {
			return false;
		}
	}
}
