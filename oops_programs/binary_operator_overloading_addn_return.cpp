#include<iostream>
using namespace std;

class student
{
	public:
		int a = 23,b = 50;
		
	student operator +(student ab)
	{
		student temp;
		temp.a = a + ab.a;
		temp.b = b + ab.b;
		return temp;
	}
};

int main()
{
	student st1,st2,st3;
	st3 = st1 + st2;
	cout << st3.a;
	cout << st3.b;
}
