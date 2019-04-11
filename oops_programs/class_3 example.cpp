#include<iostream>
using namespace std;

class Hostel
{
	int Room_No, Year;
	string Mess;
	
	public:
		void Setter(int a, int b, string c) // defining member function inside the class  * local Scope 
		{
			Room_No = a;
			Year = b;
			Mess = c;
		};
		
		void Getter()
		{
			cout << "Room number is " << Room_No << endl;
			cout << "Year is " << Year << endl;
			cout << "Mess is " << Mess << endl;
		}
	
		void SetGet();  // prototype is essential for the data members to initialize
};

// defining member functions outside the class for initializing data members of the class scope-resolution operator used* Global Scope
void Hostel :: SetGet() // we need to provide prototype of this function in the class to access the data members of the class
{
	Room_No = 219;
	Year = 2;
	Mess = "Sadhbhavna";
	cout << Room_No << endl;
	cout << Year << endl;
	cout << Mess << endl;
}

int main()
{
	Hostel Sadh;
	Sadh.Setter(20,2,"sadhbhavna");
	Sadh.Getter();
	Sadh.SetGet();
}
