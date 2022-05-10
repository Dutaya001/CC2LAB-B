//Implemente su propia función de concatenación de cadenas de texto especial (¡no es
//la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
//caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
//puntero. La función no retorna ningún valor.
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
