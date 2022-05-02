//Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
//divisor del otro.
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Ingrese  un numero: ",cin>>a;
	cout<<"Ingrese  un numero: ",cin>>b;
	if(a%b==0){
		cout<<b<<" Es divisor de "<<a;
	}
	else if(b%a==0){
		cout<<a<<" es divisor de "<<b;
	}
	else{
		cout<<"no son divisibles";
	}
	
}
