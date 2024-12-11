#include <bits/stdc++.h>
using namespace std;

class car // creating class
{
	int speed; // atrributes
	char name[50];
	float weight;
public:
	void brake(){}  // methods
	void slowdown(){}
	
};

// inheritance 
class parent
{
	public:
		int var1;
		parent() // creating constructor : it has same name as classname
		{ 
			cout<<"parent constructor\n";
		}
};

class child : public parent // inheriting the parent class
{
public:
	int var2;
	child()
	{
		cout<<"child Constructor\n";
	}
	
};

/*
Polymorphism e.g. Overloading , Overriding ,operator overloading 
1)Compile time Polymorphism-Static -early binding
2)Runtime Polymorphism - Dynamic - late binding
Fun() Overloading(same fun name but diff args,type ,numbers)
Fun() Overriding (Same fun but one in parent and other in child)
*/

class sum
{
public:
	// Fuction Overloading
	int add(int a,int b){
		int d=a+b;
		return d;
	}

	int add(int a,int b,int c){
		int d=a+b+c;
		return d;
	}

	int add(float a,float b){
		int e=a+b;
		return e;
	}

// Function Overriding 
	void display() // overridden function
	{  
		cout<<"Superclass Fuction\n";
	}
};

// inheritance
class add : public sum // inheriting the sum class 
{
public:
	void display(){ //overriding function
		cout<<"Subclass Function\n";
	}
	
};

// constructors
class constructor
{
public:
	int num;
	char ch;

	constructor(){
		num=8;
		ch='D';
	}
};


// default constructor has no arguments
class def_constructor{
public:
	def_constructor()
	{
		cout<<"This is default constructor\n";
	}
};

// In Parameterized constructor arguments are passed
class parameter_constructor
 {
 public:
 	parameter_constructor(int num1 , int num2){
 		cout<<num1+num2<<"\n";
 	}
 };

 class abc  // Passing object to a class
{
public:
	int n=56;
	char ch='S';

	void display(abc a){
		cout<<a.n<<"\n";
		cout<<a.ch<<"\n";
	}
};

class student  // passing and returning object from the function
{
public:
	int stuid;
	string name;

	student input(int n, string name)
	{
		student s;
		s.stuid=n;
		s.name=name;
		return s;
	}

	void display(student s){
		cout<<"id="<<s.stuid<<"\n";
		cout<<"name="<<s.name<<"\n";
	}
	
};

int main()
{
	car ford; // creating objects 
	car venus= car();

	child obj;  // child class invokes its constructor and as well as base class constructor.
	obj.var1=61;
	obj.var2=57;
	cout<<"var1="<<obj.var1<<"\n";
	cout<<"var2="<<obj.var2<<"\n";


	sum s1;
	cout<<s1.add(89,90)<<"\n"; // function overloading
	cout<<s1.add(56,89,90)<<"\n";
	cout<<s1.add(56.6f,89.7f)<<"\n";  // f is added to avoid ambiguity as compiler assume it double
	
	add a1; // calls on basis of objects's class
	a1.display();

	sum s2=add(); // reference to base class using child class
	s2.display();


	constructor c1;
	cout<<c1.num<<"\n";
	cout<<c1.ch<<"\n";

	def_constructor d1; // as object gets created the constructor gets called

	parameter_constructor(10,30); // implicit Call
 	parameter_constructor p1 = parameter_constructor(29,49); // 


 	abc a; // passing object to class
	a.display(a);

	student student1;
	student1=student1.input(90,"Santosh"); // returning object from class
	student1.display(student1);

	return 0;
}

/*
Types of Inheritance
1)Simple : B <-- A 
2)Multilevel : C <-- B <-- A
3)Multiple : C <-- A,B (child has more than 1 parent) : Syntax - class C : public A, public B{};
4)Hierarchial : B,C <-- A (parent has more than 1 child)
5)Hybrid : Combination of sbove

Valid function Overloading 
	int sum(int a, int b)
	int sum(int a, int b ,int c)
	double sum(int a, double c)

Invalid function Overloading as they have same parameter list. return type of function does not play any role in function overloading
	int sum(int,int)
	double sum(int ,int)

Function Overriding- same parameter & same type. We can not have more than one overriding function  in any child class. 

Constructor has no return type . When no constructor is specified then compiler creates a default constructor with the empty code.
class XYZ
{
	XYZ()
	{
	//empty - no code
	}
};
*/