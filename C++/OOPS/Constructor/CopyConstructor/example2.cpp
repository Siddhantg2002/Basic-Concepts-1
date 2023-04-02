// C++ Programt to demonstrate the student details
#include <iostream>
#include <string.h>
using namespace std;
class student {
	int rno;
	string name;
	double fee;

public:
	student(int, string, double);
	student(student& t) // copy constructor
	{
		rno = t.rno;
		name = t.name;
		fee = t.fee;
	}
	void display();
};
student::student(int no, string n, double f)
{
	rno = no;
	name = n;
	fee = f;
}
void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}
int main()
{
	student s(1001, "Ram", 10000);
	s.display();
	student ram(s); // copy constructor called
	ram.display();
	return 0;
}

