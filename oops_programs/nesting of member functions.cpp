#include<iostream>
using namespace std;

class set
{
	int m,n;
	
	public:
		// function prototype
		void input(void);
		void display(void);
		int largest(void);
};

// outside the class member function definition
int set :: largest(void)
{
	if(m >= n)
		return m;
	else 
		return n;
}

void set :: input(void)
{
	cout<<"Input values of m and n"<<"\n";
	cin>>m>>n;
}

void set :: display(void)
{
	cout<<"largest value is : "<<largest()<<"\n";
}


int main()
{
	set a;
	a.input();
	a.display();
	return 0;
}
