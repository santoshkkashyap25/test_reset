#include<bits/stdc++.h>
using namespace std;

// storing large integrs using array

const long long MAX=300;
typedef int big[MAX]; // alias for int[MAX] i.e. big is eq. to int[MAX] so big will be an array of 300 integers.


int big_len(big num)
{
	int j;
	for (j=MAX-1; j && !num[j]; j--); // decrements till condition remains true means cond. is index avail and that index is not(0)
	return j+1; // returns length
}

void big_print(big num)
{
	int i;
	for (i=big_len(num)-1; i>=0; i--) // iterating from array length to 0 and printing each number
		cout<<num[i];
	cout<<"\n";
}

void strTo_big(big num,string a) // converts the string into big type defined above
{

	int len=a.size()-1;
	for(int i=len;i>-1;i--) // fills all the number from the string to the array 
	{
		num[len-i]=a[i]-'0'; // converts the character at each position to int type
	}

}

string bigTo_str(big num) // converts the big type to string tyep
{
	ostringstream oss; // writing output into string buffer
	for(int i=big_len(num);i>=0;i--)
	{
		oss<<num[i]; // builds the string represntation
	}

	return oss.str(); // returns the string representation
} 

void big_add(big a , big b, big result) // to perform addition of two number
{
	int carry=0; // initializing carry
	for(int i=0;i<MAX;i++)
	{
	result[i]=carry+a[i]+b[i]; 
	carry=result[i]/10; // new carry if generated
	result[i]=result[i]%10;
	}
}


int main()
{


big a={0,8,2,0,0}; // overwrites the global array with given values
big_print(a);          // prints from right to left ignoring all the rightmost zeroes


big b;
memset(b,0,sizeof(b)); // initializes the array with the zero
string str="00290"; // prints from left to right ignoring all the leftmost zeroes
strTo_big(b,str); // 002898090 in string -->  090898200 in array --> 2898090 in output
big_print(b);


big c={0,2,5,0,0}; 
bigTo_str(c); // prints string representation of big
big_print(c);

big result;
big_add(b,c,result);
big_print(result);


// Using string to store the big numbers

string s="234563142451233965869486985";
cin>>s; // storing the number in string

int m=s.size(); // getting the size of the string
int last_digit=s[m-1]-'0'; // converts the character to int 
cout<<last_digit<<"\n";

}
