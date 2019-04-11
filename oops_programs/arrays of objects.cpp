#include<iostream>
using namespace std;

class employee
{
	char name[30];
	float age;
	
	public:
		void getdata(void);
		void putdata(void);
};

// outside the class member function definition

void employee :: getdata(void)
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter age: ";
	cin>>age;
}

void employee :: putdata(void)
{
	cout<<"Name: "<<name<<"\n";
	cout<<"Age: "<<age<<"\n";
}

const int size = 3;

int main()
{
	employee manager[size]; // the array manager contains three objects namely 0,1,2
	
	for(int i = 0;i < size;i++)
	{
		cout<<"\n Details of manager"<<i + 1<<"\n";
		manager[i].getdata();
	}
	
	cout<<"\n";
	
	for(int i = 0;i < size;i++)
	{
		cout<<"\nManager"<<i + 1<<"\n";
		manager[i].putdata();
	}
	
	return 0;
}
