//Hacer un array unidimensional que acepte ocho números enteros. Luego le
//pregunte al usuario que ingrese un número a buscar, implementar una función que
//busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
//contrario, retornar falso.

#include <iostream>
using namespace std; 
int nbuscar;
bool buscarNumero(int Lista[8],int nbuscar);
int main(){
	int Lista[8];  
	
	for(int i=0;i<8;i++){
		cout<<"Numero: ["<<i+1<<"]";cin>>Lista[i];
	}
	//buscarNumero(Lista,nbuscar);
	if(buscarNumero(Lista,nbuscar)==true){
		cout<<"El numero se encuentr en la lista ";
	}
	else{
		cout<<"El numero no se encuentra en la lista";
	}
	
	return 0; 
} 
bool buscarNumero(int Lista[8],int nbuscar){
	cout<<"Ingrese el numero que desea buscar: ";cin>>nbuscar;
	for(int i=0;i<8;i++){
		if(nbuscar==Lista[i]){
			return true;
		}
		else{
			return false;
		}
	}
}
	
