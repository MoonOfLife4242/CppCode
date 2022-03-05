// Cpp code to teach how to use class with object and method or OOP programming method.

#include<iostream>
#include<iostream>
#include<string>

using namespace std;

class carBrand {
	public:
		string brand;
		string model;
		int year;
		void fordCar(string carName, string carModel , int year);
		void bmw(string brand,string  model,int year) {
		cout<<brand <<" "<<model<<" " <<year<<endl;

		}

	// using constructor 
	carBrand(string x , string y , int z) {
		brand = x;
		model= y;
		year = z;
	}

};

// out class definition of method.
void carBrand :: fordCar(string carName, string carBrand, int year) {
		cout<<carName<< " " <<carBrand<<" "<<year<<endl;

}
int main() {
	// // Using object one for the first Car
	// carBrand Car1;
	// Car1.brand = "BMW";
	// Car1.model = "X5";
	// Car1.year = 2000;
	// Car1.bmw(Car1.brand, Car1.model, Car1.year);
// 
	// // using the second object for the second car brand
	// carBrand Car2;
	// Car2.brand  = "ford";
	// Car2.model = "Y5";
	// Car2.year = 2021;
	// Car2.fordCar(Car2.brand, Car2.model, Car2.year);
// 
	// for constructor
	carBrand carBrand1("toyota", "yaris", 2022);
	cout<<carBrand1.brand<<" "<<carBrand1.model<<" "<<carBrand1.year<<endl;
}
