#include<iostream>
using namespace std;

class student
{
	int a;
	public:
		student()
		{
			cout << "Enter the value of a\n";
			a = 10;
			
			cout << "Value of a is : "<<a<<endl;
		}
		
		~student()
		{
			a = a + 10; 
			cout << "Changed value of a is : "<<a<<endl;
		}
};

class student2
{
	int b;
	public:
		student2()
		{
			cout<<"Enter the value of b\n";
			b = 20;
			
			cout<<"value of b is :"<<b<<endl;
		}
		
		~student2()
	    {
	    	b = b + 20;
	    	cout << "Changed value of b is :" << b << endl;
		}
};

class derived : public student,public student2
{
	int m,n;
	public:
		derived2(int c, int d)
		{
			m = c;
			n = d;
			
			cout<<"Value of m and n is : "<<m<<n<<endl;
		}
};

int main()
{
	derived object;
	object.derived2(20,30);
	
}
