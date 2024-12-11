#include<bits/stdc++.h>

using namespace std;

void increment (int *x)  // call by reference
{
	(*x)++;
}

int main()
{
	int x=4;
	int *px=&x; // int pointer variable to store address of int variable
	cout<<"Addr of x:"<<&x<<"\n"; // & gives address of variable
	cout<<"Val of px:"<<px<<"\n"; // the value stored in pointer
	cout<<"value at px:"<<*px<<"\n"; // dereferencing of pointer 
	*px=5; // changing value using dereference operator 
	cout<<"x:"<<x<<"\n"; // changed value of the variable
	cout<<"px+1:"<<px+1<<"\n"; // moving to the next address using pointer variable 

	int **ppx=&px; // pointer to pointer having the address of pointer
	cout<<"Addr of px:"<<&px<<"\n";  // address of pointer 
	cout<<"Val of ppx:"<<ppx<<"\n"; // address of pointer is kept as value in ppx
	cout<<"value at ppx:"<<**ppx<<"\n"; // dereferencing
	**ppx=98; // changing value
	cout<<"px:"<<px<<"\n"; // address of pointer variable
	cout<<"ppx+1:"<<ppx+1<<"\n";
	cout<<"x:"<<x<<"\n";

	int a[10]; // creating array
	a[0]=90;
	a[1]=45;
	a[2]=34;

	cout<<"a:"<<a<<"\n"; // starting address of array
	cout<<"&a:"<<&a<<"\n"; // starting address of array
	cout<<"*a:"<<*a<<"\n"; // first element of array
	cout<<"a+1:"<<a+1<<"\n"; // increment address
	cout<<"&a[1]:"<<&a[1]<<"\n"; // address of second element
	cout<<"*(a+1):"<<*(a+1)<<"\n"; // element at second position

	int z=4;
	cout<<"z="<<z<<"\n";
	increment(&z); // call by address for persistant change
	cout<<"z="<<z<<"\n";

	// string pointer
	char st[100]="Santosh kumar kashyap";
	char *pstr;
	pstr=st; // address of string is passed to pointer
	while(*pstr!='\0') // checks till null
	{
	    cout<<*pstr++; // outputs each character
	}
	return 0;

	// modern compilers do not need return 0 stmt as they predefined.

}
