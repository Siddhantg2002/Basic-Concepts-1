// // Friend Class A friend class can access private and protected members of other class in which it is declared as friend. 
// // It is sometimes useful to allow a particular class to access private members of other class
// A friend class can access both private and protected members of the class in which it has been declared as friend.
// Example:
#include<iostream>
using namespace std;

class A
{
	int x;
		public:
			
	A()
	{
		x=10;
	}
	friend class B; //friend class
};

class B
{
	public:
		void display(A &t)
		{
			cout<<endl<<"The value of x="<<t.x;
		}
};

main()
{
	A _a;
	B _b;
	_b.display(_a);
	return 0;
}

// In this example, class B is declared as a friend inside the class A. Therefore, B is a friend of class A. 
// Class B can access the private members of class A.