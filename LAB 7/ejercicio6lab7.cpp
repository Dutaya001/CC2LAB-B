/*Escribe un programa que implemente la siguiente jerarquía de clases, Debe
implementar aquellos atributos y métodos necesarios para que se pueda ejecutar el
siguiente programa:*/
#include <iostream>
using namespace std; 
class Ave{
	private:
		string especie;
	public: 
		Ave(string);
		void imprimirDatos();
};

class Ganso:public Ave{	
	private: 
		int edad;	
	public: 
		Ganso(string,int);
		void mostrarGanso();
};

class Pato:public Ave{
	public:
		Pato(string,int);
		void mostrarPato();
};

class Gallina:public Ave{
	
};
Ave::Ave(string _especie){
	especie=_especie;
	
}
void Ave::imprimirDatos(){
	cout<<"Especie: "<<especie<<endl;
}

Ganso::Ganso(string _especie,int _edad):Ave (_especie){
	edad=_edad;
}
void Ganso::mostrarGanso(){
	imprimirDatos();
	cout<<"Tengo "<<edad<<" meses"<<endl;
	cout<<"Soy un ganso"<<endl;
}

Pato::Pato(string _especie,int _edad):Ave(_especie){
}

void Pato::mostrarPato(){
	imprimirDatos();
	cout<<"Soy un pato ";
}

int main(){
	Ave a1= Ave("oviparo");
	a1.imprimirDatos();
	cout<<"Clase Ganso"<<endl;
	Ganso g1= Ganso("Oviparos",10);
	g1.mostrarGanso();
	cout<<"Clase Pato"<<endl;
	Pato p1 = Pato("Oviparo",6);
	p1.mostrarPato();
	
	return 0;
}
