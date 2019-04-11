#include<iostream>
using namespace std;

class M
{
	int x;
	int y;
	
	public:
		void set(int a, int b)
		{
			x = a;
			y = b;
		}
		
		friend int sum(M m);
};

int sum(M m)
{
	// The px pointer created above is a pointer to the data-member of the M class
	
	int M ::* px = &M :: x;
	int M ::* py = &M :: y;
	M *pm = &m;
	int S = m
}

