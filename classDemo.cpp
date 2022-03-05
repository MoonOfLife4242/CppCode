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
		// cout<<Car1.brand <<" "<<Car1.model<<" " <<Car1.year<<endl;
		cout<<brand <<" "<<model<<" " <<year<<endl;

		}

};

void carBrand :: fordCar(string carName, string carBrand, int year) {
		cout<<carName<< " " <<carBrand<<" "<<year<<endl;

}
int main() {

	carBrand Car1;
	Car1.brand = "BMW";
	Car1.model = "X5";
	Car1.year = 2000;
	Car1.bmw(Car1.brand, Car1.model, Car1.year);
	 
	carBrand Car2;
	Car2.brand  = "ford";
	Car2.model = "Y5";
	Car2.year = 2021;
	Car2.fordCar(Car2.brand, Car2.model, Car2.year);
}
