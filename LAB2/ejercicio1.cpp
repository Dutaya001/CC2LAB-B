#include <iostream>
using namespace std;
int main() {
    int cont;
    for(int i=0;i<=99;i++){
        if(i%2==0){
            cont=cont+i;
        }
    }
    cout<<"La suma de enteros pares del 1 al 100 es: "<<cont;
    return 0;
}
