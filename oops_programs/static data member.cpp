#include<iostream>
using namespace std;

/* static data member is initialized to zero when the first object of its class is created
 */
 
 // static variables are normally used to maintain values common to the entire class
 // While defining a static variable, some initial value can also be assigned to the variable. For instance, 
// the following definition gives count the initial value 10
// where count is a static variable and static variable are known as class variables
// int item :: count = 10;
 class item
 {
 	static int count;
 	int number;
 	
 	public:
 		void getdata(int a)
 		{
 			number = a;
 			count ++;
		 }
		 
		 void getcount(void)
		 {
		 	cout<<"count : ";
		 	cout<<count<<"\n";
		 }
		 
 };
 
 int item :: count; // static data member is initialized to 0
 
 int main()
 {
 	item a,b,c; // three objects are declared
	 a.getcount();
	 b.getcount();
	 c.getcount();
	 
	 a.getdata(100);
	 b.getdata(200);
	 c.getdata(300);
	 
	 cout<<"After reading data :"<<"\n";
	 
	 a.getcount();
	 b.getcount();
	 c.getcount();	
 }
