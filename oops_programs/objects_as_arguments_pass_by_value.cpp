#include<iostream>
using namespace std;

// like any other data type , an object may be used as a function argument . this can be done in two ways
// A copy of the entire object is passed to the function this is known as pass by value in functions
// Only the address of the object is transferred to the function

class time
{
	int hours;
	int minutes;
	
	public:
		void gettime(int h, int m)
		{
			hours = h;
			minutes = m;
		}
		
		void puttime()
		{
			cout << hours << "hours and ";
			cout << minutes << " minutes "	<< "\n";
		}	
		
		void sum(time,time) ;// declaration with objects as arguments
};

// this method is called as call by value .
// since a copy of the object is passed to the function any changes made to the object inside the function do not affect the object used to call the function
void time :: sum (time T1, time T2)      // here t1 and t2 are objects 
{
	minutes = T1.minutes + T2.minutes;
	hours = minutes / 60;
	minutes = minutes % 60;
	hours = hours + T1.hours + T2.hours;
}

// Since the member function sum( ) is invoked by the object T3, with the objects T1 and T2 as arguments, it can directly access the hours and minutes variables 
// of T3. But the members of T1 and T2 can be accessed only by using the dot operator like T1.hours and T2.hours. Therefore , inside the function sum ( ) , the 
// variables hours and minutes refer to T3, T1.hours and T1.minutes refer to T1, and T2.hours and T2.minutes refer to T2
int main()
{
	time T1, T2, T3;
	T1.gettime(2,45);   // setter function for t1
	T2.gettime(3,30);   // setter function for t2
	
	T3.sum(T1,T2);   // in object t3 passing arguments as other objects and using t1 and t2, data members of t1 and t2 here t3 can use
	
	cout << "T1 = ";
	T1.puttime();			// display T1
	cout << " T2 = ";
	T2.puttime();			// display T2
	cout << " T3 = ";
	T3.puttime();          // display T3
	
	return 0;
}
