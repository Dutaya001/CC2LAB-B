/*Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona*/

#include <iostream>
using namespace std; 
class Person{
		private:
			string name;
			int fechaActual;
			int fNacimiento;
		
		public: 
			Person(string, int, int);
			void mostrarDatos();
};

Person::Person(string _name, int _fechaActual, int _fNacimiento){
	name = _name;
	fNacimiento = _fNacimiento;
	fechaActual =_fechaActual; 
}
void Person::mostrarDatos(){
	int edad, anio1,anio2;
	cout<<"Name: "<<name<<endl;
	anio1=int(fechaActual/10000); 
	anio2=int(fNacimiento/10000);
	edad = anio1-anio2;
	cout<<"Su edad es: "<<edad<<endl; 
}

int main(){
	Person p1 = Person("Flavio",20220512, 20011504);
	p1.mostrarDatos();
	return 0; 
}
