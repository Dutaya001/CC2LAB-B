//Implementar un programa que rellene un array con los números primos
//comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

#include<iostream>
using namespace std; 
int main(){
	int array[100];
	for(int i=1;i<=100;i++){
		int cont=0;
		for(int j=1;j<=i;i++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont==2){
			cin>>array[i];
		}
	}
}
