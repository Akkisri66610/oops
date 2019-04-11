#include<iostream>
using namespace std;

class item
{
	int a,b;
	
	public:
		// getting input from user
		void input()
		{
			a = 10;
			b = 20;
		}
		
		// displaying output
		void display()
		{
			cout<<"value of a is: "<<a<<endl;
			cout<<"value of b is: "<<b;
		}
		
};

int main()
{
	item a;
	item *ptr = &a;
	
	ptr->input();
	ptr->display();
	return 0;
}
