#include<iostream>
using namespace std;


// A copy constructor is used to declare and initialize an object from another object 
// for example Student i2(i1); would define the object i2 and at the same time initialize it to the value of 
// i1. Another form of this statement is student i2 = i1;
// this process of initializing through a copy constructor is known as copy initialization.

class code
{
	int id;
	
public:
	code()	// This is a default constructor
	{
		
	}
	
	code(int a)	// This is a parameterized constructor
	{
		id = a;
	}
	
	code(code & x)  // here x is itself became an object to that object which is passed as argument
	{
		id = x.id;		// copy in the value
		// here x.id is need to be write because it is called by different object and one object is
		// passed as argument the object passed as argument is x.id and id itself becomes the data member
		// of the object which is called that is B and A object is passed as argument
	}
	
	void display(void)
	{
		cout << id << endl;
	}
	
};

int main()
{
	code A(100);  // object A is created and initialized
	code B(A);	// copy constructor is called
	code C = A; // here also copy constructor is called but calling is explicit
	
	cout << A.display() << endl;
	cout << B.display() << endl;
	cout << C.display() << endl;
	code D;	// D is created, not initialized       // copy constructor not called
	
	return 0;
}
