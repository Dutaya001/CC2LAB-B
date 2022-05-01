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
        diaAct = diaAct + 30; // Se le suma los 30 días (1 mes) a la fecha actual
        mesAct = mesAct - 1; // Se le resta un mes (30 días) al mes actual
        respFech =  diaAct - diaNac; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respFech =  diaAct - diaNac;  //Se le resta fecha nacimiento al actual
 
    if( mesAct < mesNac )
    {   //En caso de ser menor el mes actual que el nacimiento
        mesAct = mesAct + 12; // Se le suma los 12 meses (1 año) al mes actual
        anioAct = anioAct - 1 ; // Se le resta 1 año ( 12 meses) al año actual
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
    }
    else //En caso de ser mayor el mes actual que el nacimiento
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
 
    cout << "\nSu edad es\n";
    cout << " Edad: " <<anioAct - anioNac << endl; 
    cout << " Mes: " << respMes << endl; 
    cout << " Dia: " << respFech << endl; 
}
