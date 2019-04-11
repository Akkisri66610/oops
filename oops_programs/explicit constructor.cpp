#include<iostream>
using namespace std;

class aman
{
	int a,b;
	public:
		aman(int x, int y)
		{
			a = x;
			b = y;
			cout<<a<<"\n"<<b;
		}
};

int main()
{
	aman a(20,30); // implicit call to constructor
	aman b = aman(50,60); // explicit call to constructor
	return 0;
}
