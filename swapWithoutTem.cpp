#include<bits/stdc++.h>
using namespace std;

int swap(int x , int y ) {
	x = x + y;
	y = x - y;
	x = x - y;
	
 return 0;
}

int main() {

	int x,y;
	cout<<"Enter the first number " <<endl;
	cin>>x;
	cout<<"Enter the second number";
	cin>>y;
		cout<<"the first not swapped number is "<<x<<endl;
		cout<<"the second not swapped number is "<<y<<endl;


	x = x+y;
	y = x - y;
	x = x - y;
	cout<<" now the swapped first value is : "<<x<<endl;
	cout<<"now the swapped second valueis : " <<y<<endl;

	// swappint using a function
	swap(x,y);
	
 return 0;
	
}
