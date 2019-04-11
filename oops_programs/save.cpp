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


void time :: sum (time t1, time t2)      // here t1 and t2 are objects 
{
	minutes = t1.minutes + t2.minutes;
	hours = minutes / 60;
	minutes = minutes % 60;
	hours = hours + t1.hours + t2.hours;
}

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
