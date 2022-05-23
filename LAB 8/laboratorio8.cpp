/*Defina una clase Forma que tenga los siguientes miembros de datos:
- Color
- Coordenada del centro de la forma (objeto Punto)
- Nombre de la forma (char *)
Y, al menos, las siguientes funciones miembro:
- Imprimir
- Obtener y cambiar el color
- Mover la forma (o sea, su centro)
Defina una clase derivada Rectángulo que tenga los siguientes miembros como
datos:
- Lado menor.
- Lado mayor.
Y, al menos, las siguientes funciones miembro:
- Imprimir. Debe imprimir qué se trata de un rectángulo mostrando su nombre,
color, centro y lado. Debería usarse la función Imprimir de la clase base para
realizar parte de este trabajo.
- Calcular el área (lado menor * lado mayor).
- Calcular el perímetro. (2 * lado menor + 2 * lado mayor).
- Cambiar el tamaño del rectángulo. Recibe como parámetro un factor de escala.
Así, por ejemplo, si el factor vale 2, el rectángulo duplicará su tamaño y si es 0,5
se reducirá a la mitad.
Realice un programa que pruebe el funcionamiento de estas clases. Debe crear
objetos y comprobar el correcto funcionamiento de las funciones miembro.

2. Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda
definida por su radio mayor (R) y su radio menor (r), tal que el área de una elipse
es igual a p*(R*r).
3. Defina una clase Cuadrado derivada de la clase Rectángulo.
4. Defina una clase Circulo derivada de la clase Elipse.
*/

#include <iostream>
using namespace std;

class Forma{
	private: 
		string color;
		string objetopunto;
		string nameforma;
	public:
		Forma(string,string,string);
		virtual void imprimir();
	/*	virtual void obtener();
		virtual void cambiarcolor();
		virtual void mover(); */
};

class Rectangulo: public Forma{
	private:
		float lmayor;
		float lmenor;
	public:
		Rectangulo(string,string,string,float,float);
		void imprimir();
		float area();
		float perimetro();
};
class Cuadrado: public Rectangulo{
	private:
		float lado;
	public:
		Cuadadrado(string,string,string,float);
		void imprimir();
		float area();
};
class Elipse : public Forma{
	private:
		float Rmayor;
		float Rmenor;
	public:
		Elipse(string,string,string,float,float);
		void imprimir();
		float area();
};
class Circulo :public Elipse{
	private:
		
	public: 
	
};
Forma::Forma(string _color, string _objetopunto, string _nameforma){
	color=_color;
	objetopunto=_objetopunto;
	nameforma = _nameforma;
}
void Forma::imprimir(){
	cout<<"Color:"<<color<<endl;
	cout<<"Objeto punto:"<<objetopunto<<endl;
	cout<<"Nombre de la forma: "<<nameforma<<endl;
}

Rectangulo::Rectangulo(string _color, string _objetopunto, string _nameforma,float _lmayor,float _lmenor):Forma(_color, _objetopunto , _nameforma){
	lmayor=_lmenor;
	lmenor=_lmayor;
}	
void Rectangulo::imprimir(){
	Forma::imprimir();
	cout<<"Lado mayor: "<<lmayor<<endl;
	cout<<"Lado menor: "<<lmenor<<endl;
}
float Rectangulo::area(){
	float area;
	area=lmayor*lmenor;
	cout<<"Area del rectangulo: "<<area<<endl;
}
float Rectangulo::perimetro(){
	float per;
	per=2*lmayor+2*lmenor;
	cout<<"Perimero del rectangulo:  "<<per<<endl;
}
Elipse::Elipse(string _color, string _objetopunto, string _nameforma,float _Rmayor,float _Rmenor):Forma(_color, _objetopunto , _nameforma){
	Rmayor= _Rmayor;
	Rmenor = _Rmenor;
}
void Elipse::imprimir(){
	Forma::imprimir();
	cout<<"Radio mayor: "<<Rmayor<<endl;
	cout<<"Radio menor: "<<Rmenor<<endl;
}
float Elipse::area(){
	float ar,pi=3.1416;
	ar=pi*(Rmayor*Rmenor);
	cout<<"Area del elipse:   "<<ar<<endl;
}


void Cuadrado::imprimir(){
	Forma::imprimir();
	cout<<"lado: "<<lado<<endl; 
}
float Cuadrado::area(){
	float ar;
	ar=lado*lado;
	cout<<"Area del elipse:   "<<ar<<endl;	
}
int main(){
	Rectangulo r1("rojo","centro","rectangulo",10.5,5.6);
	r1.imprimir();
	r1.area();
	r1.perimetro();
	cout<<"\n";
	Elipse e1("blanco","centro","Elipse",10,5);
	e1.area();
	e1.imprimir();
	cout<<"\n";


	return 0;
}
