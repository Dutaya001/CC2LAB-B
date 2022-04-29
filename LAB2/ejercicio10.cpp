 //Escribir un programa que pida al usuario una palabra y 
 //luego muestre por pantalla una a una las letras de la 
 //palabraintroducida empezando por la última. 
 #include <iostream>
 #include <stdio.h>
 using namespace std; 
 
 int main(){
 	string name;
 	cout<<"Nombre :",cin>>name;
 	int tam=name.length();
 	int i=tam;
 	/*while(name[i]!='\0'){
 		cout<<name[i]<<endl;
 		i;
	 }*/
	 for(int i=tam;i>-1;i--){
	 	cout<<name[i];
	 }
 }
