//Escribir un programa que visualice en pantalla los 
//números múltiplos de 5 comprendidos entre 1 y 100. 

#include <iostream>
using namespace std;
int main(){
	
	for(int i=5;i<=100;i++){
		if(i%5==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
