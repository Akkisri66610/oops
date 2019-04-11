// C++ provides a special member function called the constructor which enables an object to initialize itself
// when it is created like int i = 10 because class is also an user-defined data type . This is known as
// automatic initialization of objects. it also provides another member function called the destructor that
// destroys the objects when they are no longer required

#include<iostream>
using namespace std;

// constructor is a special member function whose task is to initialize the objects of its class . It is 
// special because its name is the same as the class name. The constructor is invoked whenever an object of 
// its associated class is created. It is called constructor because it constructs the values of data members
// of the class

class student {
	int m, n;
public:
	student();   // constructor declared
	
	// getter member function
	void Getter()
	{
		cout << "The value of m is : " << m << endl;
		cout << "The value of n is : " << n << endl;
	}
};

student :: student()	// constructor defined
{
	m = 0;
	n = 0; 
}
// when a class contains a constructor like the one defined above, it is guaranteed that an object created
// by the class will be initialized automatically.for eg. student int1 not only creates the object int1 of
// type integer but also initializes its data members m and n to zero. 


int main()
{
	student int1;
	int1.Getter();
}
