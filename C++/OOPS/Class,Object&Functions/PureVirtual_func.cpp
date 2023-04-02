// A pure virtual function (or abstract function) in C++ is a
// virtual function for which we can have implementation, 
// But we must override that function in the derived class, 
// otherwise the derived class will also become abstract class. 
// A pure virtual function is declared by assigning 0 in declaration. See the following example. 
#include<iostream>
using namespace std;

class Base
{
int x;
public:
	virtual void fun() = 0;
	int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
	int y;
public:
	void fun() { cout << "fun() called"; }
};

int main(void)
{
	Derived d;
	d.fun();
	return 0;
}

// 1) A class is abstract if it has at least one pure virtual function. 
// 2) We can have pointers and references of abstract class type. 
// 3) If we do not override the pure virtual function in derived class, then derived class also becomes abstract class. 
