#include<iostream>
using namespace std;

class akash
{
	public:
		int a = 10, b = 20;
		
		akash operator *(akash ab)
		{
			akash temp;
			temp.a = a * ab.a;
			temp.b = b * ab.b;
			return temp;
		}
};

int main()
{
	akash st1,st2,st3,st4;
	st3 = st1 * st2;
	cout << "The value of st3.a is " << st3.a << endl;
	cout << "The value of st3.b is " << st3.b << endl;
}
