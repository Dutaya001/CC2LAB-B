//Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de una persona y
// por medio de una función calcule su edad en años, meses y días.
#include <iostream>
using namespace std;
 
void Hallaredad(int,int,int, int,int,int);
 
int main ()
{
    int anioAct;
    int mesAct;
    int diaAct;
 
    int anioNac;
    int mesNac;
    int diaNac; 
 
    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: ";   cin >> anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese Dia Actual: ";  cin >> diaAct;
 
    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese dia de Nacimiento: ";  cin >>diaNac;
 
    Hallaredad(anioAct,mesAct,diaAct,anioNac,mesNac,diaNac);
 
    return 0;
}
 
void Hallaredad( int anioAct,int mesAct, int diaAct, int anioNac, int mesNac, int diaNac)
{
    int respFech,respMes;//respuesta de la diferencia de fechas
 
    if (diaAct<diaNac  )
    {   
        diaAct = diaAct + 30; 
        mesAct = mesAct - 1;
        respFech =  diaAct - diaNac; 
    }
    else 
        respFech =  diaAct - diaNac;  
 
    if( mesAct < mesNac )
    {   
        mesAct = mesAct + 12; 
        anioAct = anioAct - 1 ; 
        respMes = mesAct - mesNac; 
    }
    else 
        respMes = mesAct - mesNac;
 
    cout << "\nSu edad es\n";
    cout << " Edad: " <<anioAct - anioNac << endl; 
    cout << " Mes: " << respMes << endl; 
    cout << " Dia: " << respFech << endl; 
}
