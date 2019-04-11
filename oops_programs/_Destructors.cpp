#include<iostream>
using namespace std;

// A destructor, as the name implies, is used to destroy the objects that have been created by
// a constructor.

int count = 0;

class alpha
{
	public:
		alpha()
		{
			count++;
			cout << "\nNo. of object created" << count;
		}
		
		~alpha()
		{
			cout << "\n No. of object destroyed" << count;
			count--;
		}
};

int main()
{
	cout << "\n\nEnter MAIN\n";
	
	alpha A1, A2, A3, A4;
	{
		cout << "\n\nEnter block1\n";
		alpha A5;
	}
	
	{
		cout << "\n\nEnter block2\n";
		alpha A6;
	}
	cout << "\n\nRE-ENTER MAIN\n";
	
	return 0;
}
