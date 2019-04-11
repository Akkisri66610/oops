#include<iostream>
using namespace std;

class sample
{
	int a;
	int b;
	
	public:
		void setvalue()
		{
			a = 25;
			b = 40;
		}
		
		friend float mean(sample s)
};

// defining friend function 
float mean (sample s)
{
	return float(s.a + s.b)/2.0;
}

// The friend function accesses the class variables a and b by using the dot operator and the object passed to it . 
// The function call mean(X) passes the object X by value to the friend function.
int main()
{
	sample X;    // object X
	X.setvalue();
	cout << "Mean value = " << mean(X) << "\n";
	
	return 0; 
}



// Some characteristics of the friend function
//  * it is not in tne scope of the class to which it has been declared as friend. since it is not in the scope of the class, it cannot be called using the object 
// of that class
// * It can be invoked like a normal function without the help of any object
// * Usually it has the objects as arguments.
