/*Implemente un programa con clases que calcule el área de un rectángulo y perímetro.*/

#include <iostream>
using namespace std; 

class Rectangulo{
	private:
		float base;
		float altura; 
	public: 	
		Rectangulo(float, float);
		//void mostrarArea();
		//void mostrarPerimetro();
		float Area();
		float Perimetro();
};

Rectangulo::Rectangulo(float _base, float _altura){
	base=_base;
	altura = _altura;
}
float Rectangulo::Area(){
	return base*altura;
}
float Rectangulo::Perimetro(){
	return 2*base+2*altura;
}

int main(){
	Rectangulo r1 = Rectangulo(5,10);
	cout<<"Area: "<<r1.Area()<<endl;
	cout<<"Perimetro: "<<r1.Perimetro();
	return 0; 	
}
