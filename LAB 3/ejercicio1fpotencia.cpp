#include<iostream>
using namespace std;

int b;
int e;
int resultado=0;

int Potencia(int,int);
int main(){
	
	cout << "base: ";
    cin >>b;
    cout << "exponente ";
    cin >>e;
    cout<<"El resultado es: "<<Potencia(b,e)<<endl;
    
	system("pause");
	return 0;
}

int Potencia(int b,int e){
	int x=1;
	while (x<e){
		if (resultado<b){
		resultado=b*b;
		}
	else{
		resultado=resultado*b;
	}
		x++;

	}
	return resultado;
}
