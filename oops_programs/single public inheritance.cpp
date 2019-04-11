#include<iostream>
using namespace std;

class test
{
	int a,b;
	
	public:
		int input()
		{
			a = 5;
			b = 6;
			return (a + b);
		}
		
		void output()
		{
			cout<<"value of a is: "<<a<<"\n";
			cout<<"value of b is: "<<b<<"\n";
		}
};

class D : public test
{
	int c;
	int su;
	
	public:
		void sum()
		{
			c = 5;
			int d = input();
			su = c + d;
			cout<<su<<endl;
		}
		
			void Display_Sum()
		{
			cout<<"The sum of three numbers is :"<<su<<"\n";
		}  
	
		
		
};

int main()
{
	D object;

	object.sum();
	object.Display_Sum();
}
