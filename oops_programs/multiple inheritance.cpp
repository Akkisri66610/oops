#include<iostream>
using namespace std;

class M
{
	int a,b;
	
	public:
		int input()
		{
			cout << "Enter the value of a and b\n";
			cin >> a >> b;
			return ( a + b );
		}
};

class N
{
	int c,d;
	
	public:
		int Input()
		{
			cout << "Enter the value of c and d\n";
			cin >> c >> d;
			return ( c + d );
		}
};

class derived : public M, public N
{
	public:
		void output()
		{
			int x , y;
			x = input();
			y = Input();
			
			cout << "Value of x is : " << x << "\n";
			cout << "Value of y is : " << y << "\n";
		}
};

int main()
{
	derived object;
	object.output();
	return 0;
}
