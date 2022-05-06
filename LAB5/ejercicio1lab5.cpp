//Asignar valores a dos variables enteras, intercambie estos valores almacenados
//usando solo punteros a enteros.
#include <iostream>
#include <cstdlib>

using namespace std; 

int a,b;
void intercambiar(int *,int *);

int main(){
	cout<<"\n valores iniciales \n";
	
	cout<<"a= ";cin>>a;
	cout<<"b= ";cin>>b;
	system("Pause");
	
	cout<<"\n valores finales \n";
	
	intercambiar(&a,&b);//paso por referencia
	
	return 0; 
}

void intercambiar(int *p,int *r){
	int aux; 
	aux=*p;
	*p=*r;
	*r=aux;	
	cout<<"new a= "<<*p<<endl;
	cout<<"new b= "<<*r<<endl;
}
