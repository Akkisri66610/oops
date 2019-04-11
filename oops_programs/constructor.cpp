#include<iostream>
using namespace std;

class student
{
	int m,n;
	public:
		student(); // constructor declared
};

student :: student() // constructor defined
{
	m = 0;
	n = 0;
	cout<<m<<"\n"<<n;
}

int main()
{
	student A;
	return 0;
}


