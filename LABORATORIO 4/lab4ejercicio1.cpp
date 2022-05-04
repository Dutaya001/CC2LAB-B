//Escribir un programa donde se pueda ingresar los datos de tres personas, como el
//nombre, apellido, edad y DNI y luego lo muestre por pantalla.
#include "iostream"
#include "string"
using namespace std;

int main()
{
string nombre[5];//3
string apellido[5];//4
string dni[5];
int edad[5];

cout << "Por favor ingrese la siguiente información de los Libros: \n";
for(int i = 0; i < 3; i++)
{
cout << "\n******* Persona " << i + 1 << "********:\n";
cout << "nombre: ";
cin >> nombre[i];
cout << "apellido: ";
cin >> apellido[i];
cout << "dni: ";
cin >> dni[i];
cout << "edad: ";
cin >> edad[i];
}
return 0;
}
