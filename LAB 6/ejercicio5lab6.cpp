/*Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.*/

#include <iostream>
using namespace std; 

int main(){
	int n=2,cont;
	int matrix[3][3] = {{1,2,2},{4,5,6},{7,8,9}};
	
		for(int i=0; i<3; i++){
			for(int j=0 ;j<3; j++){
				if(n==matrix[i][j]){
					cout<<"el numero "<<n<<" se  encontro "<<"Matrix ["<<i<<"]["<<j<<"]"<<endl;
					cont++;
				}
			}
		}
		if(cont<1){
			cout<<"El numero "<<n<<"no se encuentra en la matriz";
		}
	return 0; 
}
