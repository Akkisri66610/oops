#include<iostream>
using namespace std;

int Count = 0;

class alpha
{
	public:
	alpha()
	{
		Count++;
		cout<<"\nNo. of object created :"<<Count<<"\n";
	}
	
	~alpha()
	{
		cout<<"\nNo. of object destroyed :"<<Count<<"\n";
		Count--;
	}
};

	int main()
{
	alpha a1,a2,a3,a4;
	{
		cout<<"\nEnter block 1\n";
		alpha a5;
	}
	
	{
		cout<<"\nEnter block 2\n";
		alpha a6;
	}
	
	cout<<"Exit from main\n";
	
	return 0;
	}
