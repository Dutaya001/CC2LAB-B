/*Crear una clase Color que mantenga 3 valores (RGB). Una segunda clase Material,
tendr� como informaci�n una variable de texto que describa alg�n material (Ejemplo:
madera, vidrio, platico, etc.) Una tercera clase, Objetos, deber� de heredar contenido
de ambas clases con la finalidad de describir diferentes objetos en cuanto a color y el
material. (Ejemplo: mesa de color caf� y material de pl�stico)*/

#include <iostream>
using namespace std; 

class Color{
	string rgb;
	public:
		Color(string);
		void mostrarColor();
};

class Material{
	private: 
		string tipoMaterial;
	public: 
		Material(string);
		void mostrarMat();
};

class Objetos: public Color,public Material{
	public:
		Objetos(string,string);
		void mostrarOb();
};

Color::Color(string _rgb){
	rgb=_rgb;
}
void Color::mostrarColor(){
	cout<<"el color es "<<rgb;
}

Material::Material(string _tipoMaterial){
	tipoMaterial= _tipoMaterial;
}
void Material::mostrarMat(){
	cout<<"tipo de material: "<<tipoMaterial<<endl;
}
Objetos::Objetos(string _rgb,string _tipoMaterial):Color(_rgb),Material(_tipoMaterial){
	
}
void Objetos::mostrarOb(){
	mostrarColor();
	mostrarMat();
}

int main(){
	
	
	return 0; 
}
