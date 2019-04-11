#include<iostream>
using namespace std;

class X
{
	public:
		int a;
		
		void f(int b) {
			cout << "The value of b is" << b << endl;
		}
};

int main() {
	// declare pointer to data member
	int X::*ptiptr = &X::a;
	
	// declare a pointer to member function
	void(X::* ptfptr) (int) = &X::f;
	
	// create an object of class type X
	X xobject;
	
	// initialize data member
	xobject.*ptiptr = 10;
	
	cout << "The value of a is " << xobject.*ptiptr << endl;
	
	// call member function
	(xobject.*ptfptr) (20);
	
	X *yobject;
	yobject = &xobject;
	
	// here both the object and data members have their dedicated pointers for data member its
	// ptiptr and for member function its ptfptr and for object its yobject
	cout << yobject->*ptiptr << endl;
	cout << yobject -> *ptfptr << endl;
}



