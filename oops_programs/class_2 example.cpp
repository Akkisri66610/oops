#include<iostream>
using namespace std;

class Hospital  // If you write Class it will give you an error Class does not name a type bcoz it is case-sensitive
{
	int Room_No;  // default access-specifier in class is private whereas in structures it is public
	int No_Of_Patients;
	
/*	void Setter2()  // private data members cannot be initialized in main or by private member functions they are initialized by public M.F
	{
		Room_No = 219;
		cout << "Sadhbhavna Hostel " << Room_No << endl;
	}
	*/
	private:  // As it is private main can't call the member function named setter 
		void Setter()   // we cannot 
		{
			Room_No = 127;
			cout << Room_No;
		}
		
	// To call a data member and member function which are both private we use public Access specifier in that case 
	public:
		void Setter2()
		  {
		  	Setter();
		  } // in this way a private data member and member function is initialized
}; // Binding of data and functions together into a single class-type variable is referred to as encapsulation

int main()
{
	Hospital One;
//	One.Room_No = 1523;   You cannot do this bcoz Room_No is private data member and its initialization can't be done like this 
//	One.Setter();
	One.Setter2();
	return 0;
}
