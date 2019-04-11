#include<iostream>
using namespace std;

class student
{
	public:
		int a,b;
		int get_input()
		{
			cout<<"Enter the value of a and b\n";
			cin>>a>>b;
			
			cout<<"Value of a and b is: "<<a<<"\n"<<b;
			return (a + b);
		}
};

class derived : public student
{
	public:
		int c,d,sum;
		int input()
		{
			cout<<"Enter the value of c and d"<<"\n";
			cin>>c>>d;
			
			sum = c + d + get_input();
			
			cout<<"value of the three numbers is :"<<sum<<"\n";
			
			return sum;
		}
};

class sports
{
	public:
		int scores;
		
		int getting_scores()
		{
			cout<<"Enter the scores of the team\n";
			cin>>scores;
			
			return scores;
		}
};

class result : public derived, public sports
{
	public:
		int result;
		void Input()
		{
			result = getting_scores() + input();
			cout << "Result is : "<<result<<endl; 
		}
};

int main()
{
	result object;
	object.Input();
	return 0;
}

