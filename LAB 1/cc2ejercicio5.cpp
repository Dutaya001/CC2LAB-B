#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
   float num;
   cout <<"Ingres un numero flotante: ";
   cin>>num;

   cout<<lround(num);
   //cout << fixed << num << '\n'; //imprime 12.456789
   //cout << setprecision(2) << fixed <<  num << '\n'; //imprime 12.457
   return 0;
}
