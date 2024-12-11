#include <bits/stdc++.h>

using namespace std;

// This is used to point to current object and can return current object as well as.(In non static member functions).

class A 
{
private:
	int num;
	char c;
public:
	void setter(int a,char ch)
	{
		this->num=a;
		this->c= ch;
	}
	
	void getter()
	{
		cout<<num<<"\n";
		cout<<c<<"\n";
	}
};


// this pointer also  used in function chaining

class B
{
private:
	int num;
	char ch;
public:
	B &setnum(int num) // return type is class object
	{
		this->num=num;
		return *this; // return reference to current object
	}

	B &setch(char c) 
	{
		this->num++;
		this->ch=c;
		return *this;  // returns reference to current object
	}

	void display(){
		cout<<"num="<<num<<"\n";
		cout<<"char="<<ch<<"\n";
	}
};

int main(){

	A obja;
	obja.setter(10,'S');
	obja.getter();

	B objb;
	objb.setnum(20).setch('B'); // since setnum also returned an object using this
	objb.display();

	return 0;
}