#include<iostream>
using namespace std;

class A
{
	private:
		int m;
	public:
		void show();
};

// we can define a pointer to the member m as follows:

int A::* ip = &A :: m;
