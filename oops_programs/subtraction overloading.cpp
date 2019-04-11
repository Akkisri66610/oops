#include<iostream>
using namespace std;

class akash
{
	public:
		int a = 10, b = 20;
		
	akash operator -(akash ab)
	{
		akash temp;
		temp.a = a - ab.a;
		temp.b = b - ab.b;
		return temp;
	}
};

int main()
{
	akash student1,student2,student3;
	student3 = student1 - student2;
	cout << "The value of a is " << student3.a << endl;
	cout << "The value of b is " << student3.b << endl;
}
