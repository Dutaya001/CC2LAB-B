//Calcula el promedio de 3 notas para n estudiantes.
#include<iostream>
using namespace std; 
int main(){
	int n,prom;
	cout<<"Numero de estudiantes: ",cin>>n;
	for(int i=0;i<n;i++){
		float Notas[3];
		for(int i=0;i<3;i++){
			cout<<"Nota: ";
			cin>>Notas[i];
		}
		prom=0;
		for(int k=0;k<3;k++){
			prom=prom+Notas[k];
		}
		cout<<"Promedio"<<prom/3<<endl;
	}
}
