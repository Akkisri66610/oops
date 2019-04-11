#include<iostream>
using namespace std;

//A function cannot only receive objects as arguments but also can return them.

class complex
{
	float x;  //real part
	float y;  // imaginary part
	public:
		void input(float real, float img)
		{
			x = real;
			y = img;
		}
		
		friend complex sum(complex ,complex);
		
		void show(complex);
};

complex sum(complex c1, complex c2)
{
	complex c3;    // object c3 is created
	c3.x = c1.x + c2.x;
	c3.y = c1.x + c2.y;  
	return c3;  // return object c3
}

void complex :: show(complex c)
{
	cout<<c.x<<" + j"<<c.y<<"\n";
}

int main()
{
	complex A,B,C;
	
	A.input(3.1,5.65);
	B.input(2.75,1.2);
	
	C = sum(A,B);  // c = A + b
	cout;A.show(A);
	cout;B.show(B);
	cout;C.show(C);
}
