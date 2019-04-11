Member functions of one class can be friend functions of another class. In such cases they are defined using
the scope resolution operator 

class X
{
	....
	....
	int fun1();    // member function of X
};

class Y
{
	....
	....
	friend int X :: fun1();   // fun1() of x is friend of Y
	
	....
};

The function fun1() is a member of class X and a friend of class Y.

We can also declare all the member functions of one class as the friend functions of another class.
In such cases , the class is called a friend class. this can be specified as follows:

class Z
{
	....
	friend class X;   // all member functions of X are
					  // friends of Z
};
