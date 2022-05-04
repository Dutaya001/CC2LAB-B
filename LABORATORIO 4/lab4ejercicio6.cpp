/*Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.*/
#include <iostream>
using namespace std; 
int main(){
	int numeros[3][3],filas=3,columnas=3;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingresar dato["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
		cout<<"\n";
	}
	int cont=0,sf1=0,sf2=0,sf3=0;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(i==0){
				sf1+=+numeros[i][j];			
			}
			if(i==1){
				sf2+=numeros[i][j];			
			}
			if(i==2){
				sf3+=numeros[i][j];
			}
		}	
	}
	cout<<"Suma de la fila 1: "<<sf1<<endl;
	cout<<"Suma de la fila 1: "<<sf2<<endl;
	cout<<"Suma de la fila 1: "<<sf3<<endl;		
	return 0;	
	}		
	

