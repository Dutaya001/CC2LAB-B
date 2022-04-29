/*#include <iostream>
using namespace std; 
int main() {
    int cont=0;
    int prim=0;
    while(cont!=50){
    	int ite=1;
		while(cont!=50){
			for(int i=1;i<=ite;i++){
                if(ite%i==0){
                    prim=prim+1;
                }
            } 
            ite=ite+1;
            if(prim==2){
            	cout<<ite<<endl; 
            	cont++;
			}
		}
	}
    return 0;
}


#include<iostream>
using namespace std;
int main(){
	int num;
	int Lista[num];
	int cont=0;
	cout<<"cuantos numeros desea ingresar: ",cin>>num;
	for(int i=0;i<num;i++){
		cout<<"Numero: ";
		cin>>Lista[i];
	}
	int mayor=Lista[0];
	for(int i=0;i<num;i++){
		if(Lista[i]>mayor){
			mayor=Lista[i];
		}
	}
	int menor=Lista[0];
	for(int i=0;i<num;i++){
		if(Lista[i]<=menor){
			menor=Lista[i];
		}
	}
	for(int i=0;i<num;i++){
		cont=cont+Lista[i];
	}
	
	cout<<"El mayor es: "<<mayor<<endl;
	cout<<"El menor  es: "<<menor<<endl;
	cout<<"El promedio es: "<<cont/num<<endl;
}

#include<iostream>
using namespace std; 
int main(){
	int i=1;
	while(i<=100){
		if(i%5==0){
			cout<<i<<endl;
		}
	i++;
	}
}

*/
#include <string.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	string nombre; 	
	cout<<"Nombre: ";
	cin>>nombre;
	//int Lista[4]={2,4,5,6};
	for(int i=nombre.length();i--;0){
		cout<<nombre[i];
	}
	return 0;
}
