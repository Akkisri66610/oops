#include<iostream> // class is an extension of the idea of structure used in C
using namespace std;

class Student
{
	public:
		int Roll_No;  // you can't initialize class like roll_no = 12 , it should be in main or in methods(functions) of that class
		char Sex;	  // same goes for structures
		
		// setter function sets or initializes the value of data members , 2nd way to initialize the data members of a class
		void Setter(int a, char b)
		{
			Roll_No = a;  // the argument received by a is stored in Roll_No
			Sex = b;      // Similarly for this 
		}
		
		// getter function prints out the output or value of data members of the class
		void getter()
		{
			cout << Roll_No << endl;
			cout << Sex;
		}
};

int main()
{
	Student Akash;
	Akash.Roll_No = 57;  // this is another way of initializing the data member in a class
	cout << Akash.Roll_No;
	cin >> Akash.Roll_No;  // This is one way of initializing the data members  in class 
	cout << Akash.Roll_No << endl;
	
	Akash.Setter(59,'M'); // here akash object is calling Setter function and giving it two arguments 
	Akash.getter();
	return 0;
}
