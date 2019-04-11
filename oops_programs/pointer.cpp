#include<iostream>
using namespace std;

int main()
{
	int a = 5,b = 6;
	int *p,**ptr;
	
	p = &a;
	ptr = &p;
	
	cout<<"The value of a is: "<<a<<"\n";
	cout<<"from pointer"<<*p<<"\n";
	
	cout<<"address is"<<p<<"\n";
	
	cout<<"address of ptr p is : "<<ptr<<"\n";
	cout<<"value of a is :"<<**ptr<<"\n";
	
	p = p + 2;
	ptr = ptr + 2;
	
	cout<<p<<"\n";
	cout<<ptr<<"\n";
	
	return 0;
}
