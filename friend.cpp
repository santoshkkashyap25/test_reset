#include<bits/stdc++.h>

using namespace std;

class XYZ
{
private: // private specifiers
	int num=90;
	char ch='R';
public:
	friend void display(XYZ obj); // declared as friend function
	friend class ABC; // ABC as friend class of XYZ
};

void display(XYZ obj) // friend function can be used to access the private and protected members of the class 
{
	cout<<obj.num<<"\n";
	cout<<obj.ch<<"\n";
}


class ABC // friend class can accesss private and protected member of prior class
{
public:
	void display(XYZ a){
		cout<<a.num<<"\n";
		cout<<a.ch;
	}	
};

int main()
{
	XYZ obj1;
	display(obj1);
	cout<<"----\n";
	ABC obj2;
	obj2.display(obj1); // friend class object using prior class object to call display function of the ABC class

	return 0;
}