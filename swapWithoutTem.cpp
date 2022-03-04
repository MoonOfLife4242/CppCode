#include<bits/stdc++.h>
using namespace std;


int main() {

 // int arr[] = {23,34,54,78};
 // int n = sizeof(arr)/sizeof(arr[0]);

 // for (int i = 0; i <= 2; ++i)
 // {
 // 	arr[i] = arr[i+1];
 // 	arr[i+1] = arr[i-1];
 // 	arr[i] = arr[i-1];

 // 	cout<<"swapped data" <<arr[i]<<endl;
 // }
 // for (int i = 0; i < sizeof(arr); ++i)
 // {
 // 	cout<<arr[i];
 // }

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
 return 0;
	
}
