//Implemente su propia funci�n de concatenaci�n de cadenas de texto especial (�no es
//la funci�n ordinaria de concatenaci�n!), recibir� como par�metro dos punteros de
//caracteres y tendr� que asignar el contenido del segundo puntero al INICIO del primer
//puntero. La funci�n no retorna ning�n valor.
#include <iostream>
#include <string.h>
using namespace std;
char Name[5]="hola";
char Apellido[5]="chao";

char list1[5];
char list2[5];
char *ptr,*point;

void concatenacion(char *,char *);

int main(){
	cout<<"Texto original\n";
	for(int i=0;i<5;i++){
		cout<<Name[i];
	}
	cout<<" ";
	for(int i=0;i<5;i++){
		cout<<Apellido[i];
	}
	
	cout<<"\nTexto concatenado \n";
	concatenacion(&Name[0],&Apellido[0]);
	
	return 0;
}

void concatenacion(char *ptr,char *point){
	ptr =&Apellido[0];
	point = &Name[0];
	for(int i=0; i<5; i++){
		//cout<<*(ptr+i);
		list1[i]=*(ptr+i);
	}
	for(int i=0; i<5; i++){
		//cout<<*(point+i);
		list2[i]=*(point+i);
	}
	cout<<strcat(list1, list2);
}
