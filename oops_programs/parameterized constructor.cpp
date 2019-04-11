#include<iostream>
using namespace std;

class akash
{
	int m,n;
	public:
		akash(int m, int n); // parameterized constructor declared
};

akash :: akash(int x, int z)
{
	m = x;
	n = z;
	cout<<m<<"\n"<<n;
}

int main()
{
	akash a(20,30);
	return 0;
}
