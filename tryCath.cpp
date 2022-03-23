#include <stdexcept>
#include <limits>
#include <iostream>

// using namespace std;

void MyFunc(int c)
{
    if (c > std::numeric_limits< char> ::max())
        throw std::invalid_argument("MyFunc argument too large.");
    //...
}
int main() {
	int value;
	// the value of #value is greater 256 will make error and handeld. 
	std::cout<<"Enter the safe Value to check the validity HINT: greater than 256 can cause error \n";
	std::cin>>value;
    try
    {
        MyFunc(value); //cause an exception to throw
    }

    catch (std::invalid_argument& e)
    {
        std::cerr << e.what() <<std::endl;
        return -1;
    }
    //...
	std::cout<<"It's is safe";
    return 0;
}