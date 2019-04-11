#include<iostream>
using namespace std;

class akash
{
	int a,b;
	
	public:
		void getdata(int x, int y); // function prototype
};

inline void akash :: getdata(int x, int y)
{
	a = x;
	b = y;
	cout<<a<<"\n"<<b;
}
// inline function program

int main()
{
	akash akki;
	akki.getdata(4,7);
}
