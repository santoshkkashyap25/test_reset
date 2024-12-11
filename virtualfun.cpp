#include <bits/stdc++.h>
using namespace std;


// Virtual allows resolve overrriding function at runtime so that right version of the function is called.

//without virtual keyword
class parent 
{
public:
	void sound()
	{
		cout<<"This generic function\n";
	}
};

class child: public parent
{
public:
	void sound()
	{
		cout<<"Bark\n";
	}
};


// with virtual keyword 
class parent1
{
public:
	virtual void sound()
	{
		cout<<"This generic function\n";
	}
};

class child1: public parent1
{
public:
	void sound()
	{
		cout<<"Bark\n";
	}
};

int main()
{

	parent *obj;
	obj= new child(); //Even though the child instance is passed to the parent object pointer 
	obj->sound(); //  parent function is invoked.
	//But we want child class function to be invoked with the help of that pointer.


	cout<<"Using Virtual keyword\n";
	parent1 * obj1;  
	obj1=new parent1();
	obj1->sound();
	//Not good to use so many child objects it increases complexity. So to avoid this we use virtual.

	return 0;
}