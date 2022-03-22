#include<iostream>
#include<string>
using namespace std;

// The salary attribute is private, which have restricted access.

// declare private variable
class Employe {
	private:	
		int salary;

// set the value to modify by set method
	public:
		void setSalary(int s) {
			salary = s;
		}
		// get the value to access by get method
		int getSalary() {
			return salary;
		}
};
int main() {

	Employe Em;

	Em.setSalary(8000);
	int salary = Em.getSalary();

	cout<<"Salaru is: " <<salary;
	
	return 0;
}
