#include<iostream>
using namespace std;

class student{
	public:
		int a, b;
	
	void add()
	{
		a = 6;
		b = 7;
	}
	
	void operator -()
	{
		a = -a;
		b = -b;
	}
	
	void display()
	{
		cout << "The value of a is " << a << endl;
		cout << "The value of b is " << b << endl;
	}
};

int main()
{
	student st1;
	st1.add();
	st1.display();
	
	-st1;
	st1.display();
}
