#include<iostream>
using namespace std;

class sample
{
	int m;
	void read(void); // private member function
	
	public:
		void update(void); // function prototypes
		void write(void); // these M.F. can change the value of m and can also call read
};

int main()
{
	sample s1;
	s1.read();
}
