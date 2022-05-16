/*Implemente una aplicación con clases donde una clase contiene un arreglo en el que
se pueden almacenar como máximo 5 datos. Debe tener un nuevo dato para
almacenarlo, debe existir un método que verifique que el arreglo tenga espacio
disponible para guardar el dato. En caso contrario se debe mostrar un mensaje
indicando que el arreglo está lleno. Asimismo, debe tener un método para retirar un
dato del arreglo, este método debe verificar que, si haya algo para sacar del arreglo,
es decir que el arreglo no vaya a estar vacío, en cuyo caso debe desplegar un mensaje
diciendo que no hay nada para sacar de arreglo.*/

#include <iostream>
using namespace std;
int n=4; 
int cont = 0;
int main(){
	int lix[5]={1,2,3,4,67};
	
	for(int i=0; i<5; i++){
		if(lix[i]!='\0'){
			cont++;
		}
	}
	
	if(cont==5)
	{
		cout<<"El arreglo tiene esta lleno ";
	}
	else{
		cout<<"El arreglo tiene espacios vacios "<<endl;
	}
	int dato;//elemento a retirar
	
	if(cont>0){
		cout<<"ingrese dato a retirar: ";
		cin>>n;
		for(int i=0; i<5; i++){
			if(lix[i]==n){
				lix[i]=0;
			}
		}
		cout<<"\n No se encontro el dato\n";
	}
	for(int i=0; i<5; i++){
		cout<<lix[i]<<" ";	
	}
	return 0;
}
