#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
class Test {
public:
int count=0;
	Test()
	{
		count++;
		cout << "\n No. of Object created:\t" << count;
	}

	~Test()
	{
		cout << "\n No. of Object destroyed:\t" << count;
		--count;
	}
};

int main()
{
	Test t, t1, t2, t3;
	return 0;
}

