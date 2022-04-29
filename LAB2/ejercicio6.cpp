//Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es 
//la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 3
#include <iostream>
using namespace std;

int main(){
	int n,x=0,y=1,z=1;
	cout<<"Cuantos numeros del fibonacci desea mostrar: ";cin>>n;
	for(int i=1;i<=n;i++){
		z = x+y;
		cout<<z<<" ";
		x=y;
		y=z;
	}
	return 0;
}
