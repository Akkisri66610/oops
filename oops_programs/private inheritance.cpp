#include<iostream>
using namespace std;

class test
{
	int a,b;
	
	public:
		int input()
		{
			cout << "Enter the values of a and b\n";
			cin >> a >> b;
			return (a + b);
		}
		
		void output()
		{
			cout << "Value of a and b is : "<<a<<b<<"\n";
		}
};

class derived : private test
{
	int su;
	public:
		int sum()
		{
			int x = input();
			cout << "Addition of a and b is :" <<x;
			return x;
		}
};

class derived2 : private derived
{
	public:
		void der()
		{
			int de = sum();
			cout << de << endl;
		}
};

int main()
{
	derived2 object;
	object.der();
	return 0;
}

