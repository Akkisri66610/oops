#include<iostream>
using namespace std;

class test
{
	public:
		int a,b;
		int Taking_Input()
		{
			cout<<"Enter the value of a and b: "<<"\n";
			cin>>a>>b;
			return (a + b);
		}
		
	protected:
		int c = 50 , d = 60;
	/*	int Input()
		{
			cout<<"Enter the value of c and d: "<<"\n";
			cin>>c>>d;
			return (c + d);
		}   */
		
};

class derived : protected test
{
	public:                             // error if protected access specifier is used
		void calling()
	    {
	    	int x , y;
	    	x = Taking_Input();
	    	y = Taking_Input() + c;
	    	
	    	cout << "Value of x is: "<<x<<"\n";
	    	cout << "Value of y is: "<<y<<"\n";
	    	
		}
};

int main()
{
	derived object;
	object.calling();
}
