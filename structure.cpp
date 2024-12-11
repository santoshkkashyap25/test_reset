#include<bits/stdc++.h>

using namespace std ;

// structur comprising of hetrogeneous data types
struct Album { 
string title; 
int year; 
string artist; 
};

// function of return type structure 
Album *makeLibrary(int &size) {
Album* library = new Album[3]; // array of structures
library[0] = {"Life Changes", 2017, "Thomas Rhett"}; 
library[1] = {"Montevallo", 2014, "Sam Hunt"};
library[2] = {"Not as Legit as Git", 2018, "Anand"};
return library;
}

// creating second structure

struct student
{
	int roll;
	string name;
};

student getinfo() // returning structure from the function
{
	student s;
	s.roll=88;
	s.name="Rao";
	return s;
}

void printinfo(student s) // structure is passed here
{
	cout<<s.roll<<"\n";
}


int main(){

	int size;
	size=3;
	Album *myLibrary = makeLibrary(size);
	for (int i = 0; i < size; i++) 	// output the from returned address of aaray of structures
	{
	std::cout << myLibrary[i].title << std::endl;
	}

	delete[] myLibrary; // free the resources


	student s1;
	s1.name="Ram";
	s1.roll=29;
	printinfo(s1);

	student s;
	s= getinfo(); // getting structure from the function
	printinfo(s); // structure can be pased to a function but structure  should be declared first.

	return 0;
}