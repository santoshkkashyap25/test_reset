#include<bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
for(int i=10;i>=0;i--)
{
	cout<<((num>>i)&1); // right shifting bits and finding the LSB using 'number & 1' 
}
cout<<"\n";
}


int main()
{
	int x=-4; // signed integer
	unsigned int y=x; // unsigned integer
	cout<<x<<"\n";
	printbinary(x);
	cout<<y<<"\n";

	if(x==y)
		cout<<"True\n";
	
	unsigned int z=pow(2,32)-4; // using power function to show that -x and 2^n-x are equal

	cout<<z<<"\n";
 
	if(x==z)
		cout<<"True\n";  // x,y,z all has same binary representation

	cout<<INT_MAX<<"\n"; // maximum integer value allowed signed
	// (1<<32)-1 also wont give INT_MAX as first (1<<32) will be calculated which itself is of 33 bit which gets overflow
	// 1LL used to avoid overflow
	int max_int_overflow = (1LL<<32)-1; // wont give correct INT_MAX as 1 bit used for sign of number
	cout<<max_int_overflow<<"\n";
	
	int max_int =(1LL<<31)-1; // INT_MAX=2^(32-1)-1 here 1 bit for sign used
	cout<<max_int<<"\n";
	
	unsigned int a=(1LL<<32)-1; // 2^32-1 can be stored in unsigned int
	cout<<a<<"\n"; 

	int b=9; // 1001 
	int i=3;
	if(b&(1<<i)!=0) // to check if the ith bit of number is set or unset
		cout<<"set bit\n";
	else
		cout<<"unset bit\n";

	printbinary(b|(1<<1)); // to set the ith bit using (a|(1<<i))

	printbinary(b&(~(1<<0))); // to unset the ith bit using (a|(~(1<<i)))

	printbinary((b^(1<<3))); // to toggle the ith bit using b XOR (1<<i)

	// to count the number of set bits in the binaryy number 

	int count=0;
	for(int i=31;i>=0;i--)
	{
		if((b&(1<<i))!=0)
			count++;

	}
	cout<<"Number of set bits "<<count<<"\n";

	cout<<__builtin_popcount(5)<<"\n"; // counts the number of set bits using in-built function
	cout<<__builtin_popcountll((1LL<<35)-1)<<"\n"; // count the number of set bit in long long number

	for(int i=0;i<8;i++)
	{
		printbinary(i);
		if(i& 1) // to check if number is even or odd - odd number has LSB set
			cout<<"odd\n";
		else
			cout<<"even\n";
	}

	cout<<"multiply by 2 "<<(b<<1)<<"\n"; // faster as compared to multiply operation
	cout<<"divide by 2 "<<(b>>1)<<"\n"; // faster as compared to divide operation

	for(char c='A';c<='E';++c)
	{
		cout<<c<<"\n";
		printbinary(int(c)); // print binary of ascii char from A to E
	}

	for(char c='a';c<='e';++c)
	{
		cout<<c<<"\n";
		printbinary(int(c)); // print binary of ascii char from a to e
	}

	char C='C';
	char c=C|(1<<5); // as difference between upper and lower comes at 5th bit being set for lower and unset for upper
	cout<<c<<"\n"; // lower case
	cout<<char((c&(~(1<<5))))<<"\n"; // upper case 

	cout<<char(1<<5)<<"\n"; // (1<<5) is actually space in ascii char
	printbinary('_'); // AND with '_' gives upper case

	cout<<char(C|' ')<<"\n"; // to lower OR with space
	cout<<char(c&'_')<<"\n"; // to upper AND with _

	char D='D';
	char d=D|' '; // upper to lower
	cout<<d<<"\n";

	char e='e';
	char E=e&'_'; // lower to upper
	cout<<E<<"\n";


	printbinary(59);
	int n=59;
	i=4; // till ith bit clear the LSB means unset the bit till 4th bit
	int m=(n&(~((1<<(i+1))-1))); // clears LSB till ith position of n
	printbinary(m);

	i=2;
	int p=(n&((1<<(i+1))-1)); // clears the MSB till ith position of n
	printbinary(p);

	int q=6;
	if(q&(q-1))
		cout<<"Not power of 2\n";
	else
		cout<<"power of 2\n";

}