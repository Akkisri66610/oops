#include<iostream>
using namespace std;

class student
{
	public:
		int a = 50;
		int b = 60;
		
		void operator +(student ab)			// pass by value
		{
			student ac;
			ac.a = a + ab.a;
			ac.b = b + ab.b;
			cout << ac.a << " " << ac.b << endl;
		}
};

int main()
{
	student a,b,c;
	 a + b;
}
