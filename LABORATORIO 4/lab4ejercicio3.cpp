//Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
//debe mostrar la suma de todos los números que estén en una fila par.
#include <iostream>
using namespace std; 

int main(){
	int numeros[5][3],filas=5,columnas=3;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingresar dato["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	int cont=0;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(i%2==0){
				cont=cont+numeros[i][j];
			}
		}
		cout<<"\n";
	}
	cout<<"La suma es de las filas  pares es:"<<cont;
	return 0;
}
