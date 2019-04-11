#include<iostream>
using namespace std;

class code
{
	int id;
	
	public:
		code() 				// default constructor
		{
			
		}
		
		code(int a)			// parameterized constructor
		{
			id = a;
		}
		
		code(code &x)		// copy constructor
		{
			id = x.id;   //copy in the value
		}
		
		void display(void)
		{
			cout<<id<<"\n";
		}
		
};


	int main()
	{
		code A(100); // object A is created and initialized
		code B(A);  // copy constructor called giving an object as an argument and as an address
		code C = A; // again copy constructor is called but this time the callling is explicit
		
		code D; // D is created, not initialized
		D = A;  //copy constructor not called
		
		cout;A.display();"\n";
		cout;B.display();"\n";
		cout;C.display();"\n";
		cout;D.display();"\n";
		
		return 0;
	}
