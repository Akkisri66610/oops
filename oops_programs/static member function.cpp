#include<iostream>
using namespace std;

/* static function can have access to only other static members(functions or variables) declared in the class
and also static member function can be called using the class name(instead of its objects) for eg. 

class-name :: function-name;*/



class  test
{
	int code;
	static int count; // static member variable
	
	public:
		void setcode(void)
		{
			code = ++count;
		}
		
		void showcode(void)
		{
			cout<<"object number"<<code<<"\n";
		}
		
		static void showcount(void)  // static member function
		{
			cout<<"count :"<<count<<"\n";
		}
};

int test :: count; // initialization of static data member to zero

int main()
{
	test t1,t2;
	
	t1.setcode();	// here the static variable count is set to 1
	t2.setcode();	// here the static variable count is set to 2 which is same for both objects 
	
	test :: showcount(); // accessing static member function and output comes out to be 2
	
	test t3;	// third object is created here static variable count is set to 2
	t3.setcode();	// here the static variable count is set to 3
	
	test :: showcount(); // output comes out to be 3
	
	t1.showcode(); 
	t2.showcode();
	t3.showcode();
	
	return 0;
}
