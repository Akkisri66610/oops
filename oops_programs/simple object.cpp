#include<iostream>
using namespace std;

class item
{
	int number; // private by default
	float cost;
	
	public:
		// functions are used to access the data members of private access specifier
		void getdata(int a, float b)
	     {
	     	number = a;
	     	cost = b;
		 }
		 
		void putdata(void)
		{
			cout<<"The value of a is :"<< number <<"\n";
			cout<<"The value of b is :"<< cost <<"\n";
		}
};

// making object of the class item

int main()
{
	item x;
	x.getdata(20,30);
	x.putdata();
	return 0;
}
