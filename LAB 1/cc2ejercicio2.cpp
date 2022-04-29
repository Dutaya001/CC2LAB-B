#include <iostream>
using namespace std;

//ttayar@unsa.edu.pe
int main(){
    string Name,firstname,secondname; 
    cout<<"Name: ",cin>>Name;
    cout<<"Fist name: ",cin>>firstname;
    cout<<"second name: ",cin>>secondname; 
    cout<<Name[0]+firstname+secondname[0]+"@unsa.edu.pe"<<endl;
	return 0;
}
