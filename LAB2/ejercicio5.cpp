//Elabore un programa que lea n números y determine cuál 
//es el mayor,el menor y la media de los números leídos. 
#include <iostream>
using namespace std; 

int main(){
	int n;
	int cont;
	int Numeros[n];
	cout<<"Cuantos numeros ingresara: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Numero["<<i<<"]:",cin>>Numeros[i];
		cont=cont+Numeros[i];	
	}
	int mayor=Numeros[0];
	int menor=Numeros[0];
	
	for(int i=0;i<n;i++){
		if(Numeros[i]>mayor){
			mayor=Numeros[i];
		}
		if(Numeros[i]<menor){
			menor=Numeros[i];
		}
	}
	
	cout<<"El mayor es "<<mayor<<endl;
	cout<<"El menor es "<<menor<<endl;
	cout<<"El promedio es "<<cont/n<<endl;
	return 0;
}
