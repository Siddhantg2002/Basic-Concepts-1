// On the other hand, when the base class is publicly inherited by the derived class,
// public members of the base class also become the public members of the derived class. 
// Therefore, the public members of the base class are accessible by the objects of the derived class
// as well as by the member functions of the derived class.
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
// Base class
class Parent {
public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent {
public:
	int id_c;
};

// main function
int main()
{
	Child obj1;

	// An object of class child has all data members
	// and member functions of class parent
	obj1.id_c = 7;
	obj1.id_p = 91;
	cout << "Child id is: " << obj1.id_c << '\n';
	cout << "Parent id is: " << obj1.id_p << '\n';

	return 0;
}

