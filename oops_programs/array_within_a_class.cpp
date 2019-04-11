#include<iostream>
using namespace std;

class Array{
	int number[10]; // declaring arrays within a class
	
	public:
		void Setter()
		{
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter the elements in the array\n";
			cin >> number[i];
		}
		}
		
		void Getter()
		{
			int sum = 0;
			for(int i = 0; i < 10; i++)
			{
				sum = sum + number[i];
			}
			
			cout << "Sum of the numbers entered by the user is " << sum << endl;
		}
};

int main()
{
	Array Numbers;
	Numbers.Setter();
	Numbers.Getter();
	return 0;
}
