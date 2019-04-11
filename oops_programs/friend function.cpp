#include<iostream>
using namespace std;

/* friend function possesses special characteristics it is not in the scope of the class to which it has been declared as friend;
Since it is not in the scope of the class, it cannot be called using the object of that class.
It can be invoked like a normal function without the help of any object
Unlike member functions, it cannot access the member names directly and has to use an object name and dot membership operator with
each member name(e.g. A.x).
it can be declared either in the public or the private part of a class without affecting it's meaning
Usually it has the objects as arguments. */

class sample
{
	int a,b;
	public:
		void setvalue()
		{
			a = 25;
			b = 40;
		}
		
		friend float mean(sample s);  // friend function with object s as argument
		
};

float mean(sample s)
{
	return float(s.a + s.b)/2.0;  // as s contains class sample data members as well as member function so we can add two data members and similarly we can call functions as well
}

int main()
{
	sample X;
	X.setvalue(); // here in x object a and b values i.e. 25 and 40 are stored
	cout<<"Mean value = "<<mean(X)<<"\n";
	
	return 0;
}


