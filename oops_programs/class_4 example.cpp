#include<iostream>
using namespace std;

// protected accessible in the class that defines them and in other classes which inherit from that class
// things that are private are only visible within the class itself
// things that are protected are visible in the class itself and in subclasses
// protected = same as private but derived classes can also access

class student
{
	protected:
//		int number = 500;  you cannot do this in protected
		int Number;
		string name;
		char sex;
		
		void Setter()   //protected member functions can initialize data members but can't be called in main
		{
			Number = 500;
			cout << "Number is " << Number << endl;
		}
		
		public:
			void Setter2()
			{
				Setter();
			}
		
};

int main()
{
	student akash;
	akash.Setter2();
	return 0;
}
