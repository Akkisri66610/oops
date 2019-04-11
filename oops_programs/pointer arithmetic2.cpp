#include<iostream>
using namespace std;

int main()
{
	int a[5] = {10,20,35,52,63};
	int *ptr;
	int i;
	
	for(i = 0; i < 5;i++)
	{
		cout<<a[i]<<"\n";
	}
	
	ptr = a;
	cout<<"value at ptr is: "<<*ptr<<"\n";
	ptr++;
	
	cout<<"value at ptr++ is"<<*ptr<<"\n";
	ptr = ptr + 2;
	cout<<"value at ptr + 2 is"<<*ptr<<"\n";
	
	ptr = ptr - 2;
	cout<<"value at ptr - 2 is"<<*ptr<<"\n";
	
	return 0;
}
