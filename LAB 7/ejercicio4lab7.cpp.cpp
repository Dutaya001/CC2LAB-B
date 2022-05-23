/*Escribe una clase de nombre ClaseDisco, que herede de la clase ClaseMultimedia los
atributos y métodos definidos por usted. La clase ClaseDisco tiene, aparte de los
elementos heredados, un atributo más también definido por usted. Al momento de
imprimir la información debe mostrase por pantalla toda la información.*/

#include <iostream>
using namespace  std;
class Multimedia{
	private:
		string nombre;
	public:
		Multimedia(string);
		void mostrar();
		
};
class Disco:public Multimedia{
	int duracion;
	public:
		Disco(string, int);
		void Reproducir();
		void MotrarDis();
};

Multimedia::Multimedia(string _nombre){
	nombre=_nombre;
}
void Multimedia::mostrar(){
	cout<<nombre;
}
Disco::Disco(string _nombre, int _duracion):Multimedia(_nombre){
	duracion=_duracion;
}
void Disco::Reproducir(){
	cout<<"el ";
	mostrar();
	cout<<" Esta reproduciendo"<<endl;
}
void Disco::MotrarDis(){
	mostrar();
	cout<<"\n" ;
	cout<<"dura: "<<duracion<<"Minutos"<<endl;
}

int main(){
	Disco d1("Disco",10);
	d1.Reproducir();
	return 0;
}
