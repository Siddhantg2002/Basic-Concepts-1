// A special case of hybrid inheritance: Multipath inheritance: 
// A derived class with two base classes and these two base classes have one common base class 
// is called multipath inheritance. 
// Ambiguity can arise in this type of inheritance. 
// C++ program demonstrating ambiguity in Multipath
// Inheritance

#include <iostream>
using namespace std;

class ClassA {
public:
	int a;
};

class ClassB : public ClassA {
public:
	int b;
};

class ClassC : public ClassA {
public:
	int c;
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
};

int main()
{
	ClassD obj;

	// obj.a = 10;				 // Statement 1, Error
	// obj.a = 100;				 // Statement 2, Error

	obj.ClassB::a = 10; // Statement 3
	obj.ClassC::a = 100; // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout << " a from ClassB : " << obj.ClassB::a;
	cout << "\n a from ClassC : " << obj.ClassC::a;

	cout << "\n b : " << obj.b;
	cout << "\n c : " << obj.c;
	cout << "\n d : " << obj.d << '\n';
}

// In the above example, both ClassB and ClassC inherit ClassA, they both have a single copy of ClassA. 
// However Class-D inherits both ClassB and ClassC, therefore Class-D has two copies of ClassA, 
// one from ClassB and another from ClassC. 
// If we need to access the data member of ClassA through the object of Class-D,
//  we must specify the path from which a will be accessed, whether it is from ClassB or ClassC, 
//  bcoz compiler can’t differentiate between two copies of ClassA in Class-D.

// There are 2 Ways to Avoid this Ambiguity: 
// 1) Avoiding ambiguity using the scope resolution operator: Using the scope 
// resolution operator we can manually specify the path from which data member a will be accessed, 
// as shown in statements 3 and 4, in the above example. 
// obj.ClassB::a = 10;       // Statement 3
// obj.ClassC::a = 100;      // Statement 4

// 2) Avoiding ambiguity using the virtual base class: 

// #include<iostream>
// class ClassA
// {
//   public:
//     int a;
// };
 
// class ClassB : virtual public ClassA
// {
//   public:
//     int b;
// };
 
// class ClassC : virtual public ClassA
// {
//   public:
//     int c;
// };
 
// class ClassD : public ClassB, public ClassC
// {
//   public:
//     int d;
// };
 
// int main()
// {
//     ClassD obj;
 
//     obj.a = 10;       // Statement 3
//     obj.a = 100;      // Statement 4
 
//     obj.b = 20;
//     obj.c = 30;
//     obj.d = 40;
 
//     cout << "\n a : " << obj.a;
//     cout << "\n b : " << obj.b;
//     cout << "\n c : " << obj.c;
//     cout << "\n d : " << obj.d << '\n';
// }



// Output: 
// a : 100
// b : 20
// c : 30
// d : 40