#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
class Geeks {
	// Access specifier
public:
	// Data Members
	string geekname;
	// Member Functions()
	void printname() { cout << "Geekname is:" << geekname; }
};
int main()
{
	// Declare an object of class geeks
	Geeks obj1;
	// accessing data member
	obj1.geekname = "SID";
	// accessing member function
	obj1.printname();
	return 0;
}

