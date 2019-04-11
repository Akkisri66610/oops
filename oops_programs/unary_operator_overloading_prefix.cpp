#include<iostream>
using namespace std;

class student{
	public:
		int a, b;
		
	void setter()
	{
		a = 5;
		b = 6;
	}
	
	void operator ++()
	{
		a = ++a;
		b =	++b;
	}
	
	void getter()
	{
		cout << "The value of a is " << a << endl;
		cout << "The value of a is " << b << endl;
	}
};

int main()
{
	student akash;
	akash.setter();
	akash.getter();
	
	++akash;
	akash.getter();
}
