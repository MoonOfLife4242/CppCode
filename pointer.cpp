#include<iostream>
#include<string>
using namespace std;
int main() {

string food = "gomen";
string *name = &food;

cout<<" prevous pointer :" <<*name<<endl;
cout<<"previous variable "<<food<<endl;

// modify the value of pointer 

*name = "burger";
cout<<"\n pointer food"<<*name;
cout<<"\n variable food"<<food<<endl;
	return 0;
}
