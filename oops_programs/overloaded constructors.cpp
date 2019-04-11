#include<iostream>
using namespace std;

class abhilash
{
	int a,b;
	float x,y,g;
	double z;
	
	public:
		abhilash() // constructor is a special member function which gets automatically called when object is declared
		{
			
		}
		
		abhilash(int x, int y)
		{
			a = x;
			b = y;
			cout << a <<"\n" << b;
		}
		
		abhilash(float c, float d, float e) // we can't give the same no. of arguments like float c and d no. of arguments must differ
		{
			x = c;
			y = d;
			g = e;
			cout<<x<<y;
		}
		
		abhilash(double p)
		{
			z = p;
			cout<<z;
		}
		
		
};

	int main()
	{
		abhilash a(20,30);
		abhilash b(40);
		abhilash c(40.1,40.2,45.6);
		return 0;
	}
