/*input
45
Santosh
wings of fire
wings of fire
*/

#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); 

const int G =1e7; // global array can extend to 1e7 as stored in data segment which has no limit but size must be constant
int global_array[G]; // global array are always initialized with zeroes

// local variable and global variable can have same name as their scope are different

void fun()
{
char var='A';
}

char var='Z'; 

int main()
{
	fast_io

	int L=1e5; // local array size is upto 1e5= 10^5
	int arr[L];

	char ch='S';
	cout<<(int) ch<<endl; // ascii value

	int c=100000;
	int d=100000;
	int e=c*d; // overflow
	cout<<e<<endl;

	int mx=INT_MAX;
	cout<<INT_MAX<<endl;
	int mn=INT_MIN;
	cout<<mn<<endl;
	cout<<mx+1<< endl; // shows cyclic nature of data type mx+1=min

	long long int f=c * 1LL * d; // 1 LL to convert into long long data type if operands are not of ll type
  
	double g =100000;
	double h=100000;
	double i=g*h;
	cout<<"i="<<fixed<<setprecision(0)<<i<<endl;
	double j=1e24;
	cout<<fixed<<j<<endl; // precision error occurs as correct number does not comes up so use double less

	int a;
	cin>>a;
	cin>>ws; // cin>>ws; & cin.ignore(); ignores the line to avoid  mixing of cin with getline()
	string p;
	getline(cin,p);

	char book1[50];
	cin>>book1; //  cin is very inefficient method as it ignores all chars after first white space

	char book2[50];
    cin.get(book2,10); // cin.get(var_name ,size) uesd but not useful as memory allocated earlier.

	string x="hello World "; // So string object is used as it allows proper memory management.(Dynamic Allocation).
	string y=x+x;
	y[5]='4'; // mutable
	cout<<y.substr(2,5)<<"\n"; // returns chars starting from index 2 to next 5 chars
	cout<<y.find('l')<<"\n"; // returns index for first occurrence of 'l' or string ::npos

	//Enum used to assign only one value to variable, assigning two values leads to comilation error
	enum directions{east ,west,north ,south} dir; // member get numeric 0,1,2 3.. by default
	dir =west ; 
	cout<<dir<<"\n";

	enum boolean{wrong ,right };
	boolean stair=right;
	cout<<stair<<"\n";

	enum grade{A=10,B=20,C=30} gr;
	gr=B;
	cout<<gr<<"\n";

}

/*
Operator Precedence-
1.Unary-->++,!,~
2.Multiplicative
3.Additive
4.Shift
5.Relational
6.Equality-->==,!=
7.&>^>|(bitwise)
8.&&
9.||
10.Ternary
11.Assignment-->+=,&=
*/