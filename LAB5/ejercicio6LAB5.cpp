/*Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.*/

#include <iostream>
#include <stdio.h>
using namespace std;

int a=10,b=5;
int *ptra,*ptrb;

void sumar(int *,int *);
void restar(int *,int *);
void multiplicar(int *,int *);
void dividir(int *,int *);

int main(){
	ptra=&a;
	ptrb=&b;
	sumar(&a,&b);
	restar(&a,&b);
	multiplicar(&a,&b);
	dividir(&a,&b);
	
	return 0;
}
void sumar(int *ptra,int *ptrb){
	cout<<"suma: "<<*ptra+*ptrb<<endl;
}
void restar(int *ptra,int *ptrb){
	cout<<"La diferencia es: "<<*ptra-*ptrb<<endl;
}
void multiplicar(int *ptra,int *ptrb){
	cout<<"El producto  es: "<<(*ptra)*(*ptrb)<<endl;
}
void dividir(int *ptra,int *ptrb){
	if(*ptrb==0){
		cout<<"no se puede divisir entre 0";
	}
	cout<<"La division es: "<<(*ptra)/(*ptrb)<<endl;
}
