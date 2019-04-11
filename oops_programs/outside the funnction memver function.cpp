#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
	
	public:
		void getdata(int a, float b);
		void putdata(void);
		
		// outside the class member function definition
};

void item :: getdata(int a, float b)
{
	number = a;
	cost = b;
}

void item :: putdata(void)
{
	cout<<" a is : "<< number<<"\n";
	cout<<"b is : "<<cost<< "\n";
}


int main()
{
	item x; //create object x
	
	x.getdata(100,200);
	x.putdata();
	
	item y;
	
	y.getdata(200,175);
	y.putdata();
	
	return 0;
}
