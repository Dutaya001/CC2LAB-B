/*Se conoce de un alumno de la Universidad Nacional de San Agustín: 
CUI, nombre completo y tres notas parciales (nota1, nota2, nota3).
El programa con clases debe imprimir: CUI, el primer nombre, 
el promedio de las tres notas e indique con un mensaje si el alumno aprobó 
(nota final >= 10.5) o no aprobó (nota final < 10.5) la asignatura de Ciencias de la Computación II.*/

#include <iostream>
using namespace std;

class Alumno{
	string nombre; 
	int cui,nota1,nota2,nota3;
	public: 
		Alumno(string nombre, int cui, float nota1, float nota2 ,float nota3){
			this ->nombre = nombre;
			this -> cui = cui;
			this ->nota1 = nota1;
			this ->nota2 = nota2;
			this ->nota3 = nota3;
		}
		void mostrarResultado(){
			float sum= nota1+nota2+nota3;
			float promedio= (nota1+nota2+nota3)/3;
			if(promedio>10.5){
				cout<<nombre<<" Aprobo"<<endl;
			}
			else{
				cout<<nombre<<" Desaprobo "<<endl;
			}
		}
};
int main(){
	Alumno a1 = Alumno("Sander",20191110,19.0,20,17.5);
	a1.mostrarResultado();
	Alumno b1 = Alumno("Mateo",20215454,10.5,10.5,10.4);
	b1.mostrarResultado();
	return 0;
}
