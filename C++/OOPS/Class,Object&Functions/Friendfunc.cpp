// Friend Function Like friend class, a friend function can be given a special grant to
// access private and protected members. 
//  A friend function can be: 
// a) A member of another class 
// b) A global function 
// A friend function is a special function in C++ which in-spite of not being member function of a class has privilege
// to access private and protected data of a class.
// A friend function is a non member function or ordinary function of a class, which is declared as a friend
// using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions
// are given to the function.
// The keyword “friend” is placed only in the function declaration of the friend function and not in the 
// function definition.
// When friend function is called neither name of object nor dot operator is used. 
// However it may accept the object as argument whose value it want to access.
// Friend function can be declared in any section of the class i.e. public or private or protected.

#include<iostream>
using namespace std;

class Largest
{
	int a,b,m;
	public:
		void set_data();
		friend void find_max(Largest);	
};

void Largest::set_data()
{
	cout<<"Enter the First No:";
	cin>>a;
	cout<<"Enter the Second No:";
	cin>>b;
}



void find_max(Largest t)
{
	if(t.a>t.b)
		t.m=t.a;
	else
		t.m=t.b;
		
		cout<<"Maximum Number is\t"<<t.m;
}

main()
{
	Largest l;
	l.set_data();
	find_max(l);
	return 0;
}

