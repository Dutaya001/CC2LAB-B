/*Desarrollar un programa, utilizando funciones con un tipo de retorno, con las siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par. 
c. Sumar todos los números impares desde el 0 hasta el valor de x. */
#include <iostream>
using namespace std;
int valor;
int cont;

bool Comprobar(int);
bool Par(int);
int Suma(int);

int main(){
	cout<<"Ingrese un valor: ";
	cin>>valor;
	return 0;	
	
	//cout<<"El numero es par: "<<bool Par(int)<<endl;
	cout<<"La suma de imapres es: "<<Suma(valor)<<endl;
	
};
bool Comprobar(int valor){
	if(valor>=0 && valor<=100){
		return true;
	}
	else{
		return false;
	}
}
bool Par(int valor){
	if(valor%2==0){
		return true;
	}
	else{
		return false;
	}
}
int Suma(int valor){
	for(int i=0;i<valor;i++){
		if(i%2!=0){
			cont+=i;
		}
	}
	return cont;
}

