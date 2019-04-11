#include<iostream>
using namespace std;

class Student
{
	int Roll_No;
	char Sex;
	
	public:
		Student(int a, char b)  	// defined parameterized constructor
		{
			Roll_No = a;
			Sex = b;
		}
		
		void Getter()
		{
			cout << "Roll NO. of student is " << Roll_No << endl;
			cout << "Sex of student is " << Sex << endl;
		}
};

int main()
{
	Student t1(1726070,'m');		// implicit call to parameterized constructor
	Student t2(171383,'m');
	t1.Getter();
	t2.Getter();
	
	Student t3 = Student(123,'f');	// explicit call to parameterized constructor
	t3.Getter();
	
	// two ways to call an parameterized constructor that is implicit and explicit
	
}
