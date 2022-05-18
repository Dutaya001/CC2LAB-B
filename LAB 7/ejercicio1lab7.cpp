/*Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.*/

#include <iostream>
using namespace std; 

class Persona{
	private: 
		string nombre;
		int edad;
	public: 
		Persona(string,int);
		void asignarDatos();
};
class Alumno:public Persona{
	public:
		Alumno(string,int);
		void mostrarAlumno();
};
Persona::Persona(string _nombre,int _edad){
	nombre=_nombre;
	edad = _edad;
}
void Persona::asignarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre,int _edad):Persona(_nombre,_edad){
}
void Alumno::mostrarAlumno(){
	asignarDatos();
}
int main(){
	Persona p1 =Persona ("Sander",15);
	p1.asignarDatos();
	cout<<"mostrar Alumno y datos";
	Alumno a1 = Alumno("El rockero",65);
	a1.mostrarAlumno();
	return 0;
}
