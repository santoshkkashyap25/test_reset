#include<bits/stdc++.h>

using namespace std;

/*
*Encapsulation used for data Hiding .
*So Data members are made private and these can not be accesed by any entity outside the class.
*Member Functions are made public and through getter and setter functions values are passed.
*Abstraction means hiding the irrelevant details to the user by making data members private.

*/

class encap
{
private:
	int num;
	char ch;
public:
	void setter(int num,char ch)
	{
		this->num=num;  // this is used to refer to current object
		this->ch=ch;
	}

	int getnum() const
	{
		//num++; will cause error as it is a const member function
		return num;
	}
	char getch() const
	{
		return ch;
	}
	
};


/*
Abstract class or Interface is a class contain pure virtual function which has no defination.Abstract class can have constructors.
*/

class animal
{
public:
	virtual void sound()=0; //pure virtual function

	void sleeping()
	{
		cout<<"Sleeping\n";
	}
	
};

// Derived should contain the implementation of the pure virtual function otherwise they also become the abstract class .
class dog: public animal
{
public:
	void sound(){
		cout<<"Bark\n";
	}
};

int main()
{

	encap d;
	d.setter(10,'S');
	cout<<d.getnum()<<"\n";
	cout<<d.getch()<<"\n";

	//-----------------------------------------//

	dog obj;
	obj.sleeping();
	obj.sound();
    
    //Abstract class has no object .But Abstract class can have its pointer and references to child of derived class.
	animal *obj2=new dog();
	obj2->sound();

	return 0;
}