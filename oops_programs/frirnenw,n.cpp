#include<iostream>
using namespace std;

// Member functions of one class can be friend functions of another class. In such cases they are defined using the scope resolution operator

class ABC; // forward declaration

class xyz
{
	int x;
	public:
		void setvalue(int i)
		{
			x = i;
		}
		
		friend void max(xyz,ABC);
};

class ABC
{	int a;
public:
	void setvalue(int i)
	{
		a = i;
	}
	
	friend void max(xyz,ABC);
};

void max(xyz m,ABC n)   // definition of friend
{
	if(m.x >= n.a)
		cout<<m.x;
	else
		cout<<n.a;
}

int main()
{
	ABC abc;
	abc.setvalue(10);
	xyz xy;
	xy.setvalue(20);
	max(xy,abc);
	
	return 0;
}
