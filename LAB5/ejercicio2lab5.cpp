/*Cree dos vectores con valores flotantes y as�gnele valores aleatorios, para esto deber�
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los
punteros. Repita este proceso de asignaci�n y retiro de memoria dentro de un for de
1 000 000 veces.*/

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
	int *ptr,*ptr1;
	int tam=5;
	int *prod = new int[tam];
	
	ptr= new int[tam];
	ptr1 =new int[tam];
		
	for(int i=0; i<tam; i++){
		*(ptr+i)=rand()%10;
		cout<<*(ptr+i)<<" ";
	}
	cout<<"\n";
	for(int i=0; i<tam; i++){
		*(ptr1+i)=rand()%10;
		cout<<*(ptr1+i)<<" ";
	}
	for(int i=0; i<tam; i++){
		*(prod+i)=(*(ptr1+i)) * (*(ptr+i));
	}
	cout<<"\n";
	for(int i=0; i<tam; i++){
		cout<<*(prod+i)<<" ";
	}
	
	delete [] ptr;
	delete [] ptr1;
	return 0;
}
