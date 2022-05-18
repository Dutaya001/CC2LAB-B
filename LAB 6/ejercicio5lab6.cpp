/*
Implementar un programa con clases que haga la búsqueda de un dato almacenado en una matriz 
de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe indicar la posición donde se encuentra el dato.
*/
#include <iostream>
#include <cstdlib>
using namespace std; 

class matrix
{ 
   int **p, m, n; 
public: 
   matrix(int row, int col){ 
      this ->m= 3; 
      this ->n= 3; 
      p = new int*[m]; 
      for (int i = 0; i < m; i++) 
	 p[i] = new int[n]; 
   }
   ~matrix(){
   for (int i = 0; i < m; i++)
		delete p[i]; 
    	delete p; 
   } 
   
    void accept(){ 
      cout<<"ingresar elementos ala matriz: "; 
      for(int i = 0; i < m; i++) { 
	 	for(int j = 0; j < n; j++){ 
	 		p[i][j]=rand()%10; 
	 		} 
    	} 
   }
   void Buscar(){
   	int n=rand()%10,cont;
   	for(int i=0; i<3; i++){
			for(int j=0 ;j<3; j++){
				if(n==p[i][j]){
					cout<<"\n el numero "<<n<<" se  encontro "<<"Matrix ["<<i<<"]["<<j<<"]"<<endl;
					cont++;
				}
			}
		}
		if(cont<1){
			cout<<"\n";
			cout<<"El numero "<<n<<"no se encuentra en la matriz"<<endl;
		}
   }
      void display(){ 
      cout <<"The matrix is:";
      for(int i = 0; i < m; i++) { 
	 	cout <<endl; 
	 	for(int j = 0; j < n; j++){ 
	    	cout << p[i][j] <<" "; 
			} 
		} 
   }
};
int main(){
	matrix rf(3,3);
	rf.accept();
	rf.Buscar();
	rf.display();
	return 0;
}

