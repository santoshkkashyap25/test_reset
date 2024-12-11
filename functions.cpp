#include<bits/stdc++.h>

using namespace std;

// if need to use array in function then instead of passing array ; array can be declared globally.
const int N=1e4; // global array with size 10000
int arr[N];

void func()
{
	arr[0]=9;
}
 
// After assigning first default value then subsequent parameters must have default value also else it's error.
int sum(int a , int b=79 ,int c=45)
{
	int d=a+b+c;
	return d;
}

// only first dimension can be left empty in 2D array
void square(int arr[][3])
{
	for (int i=0;i<2;i++)
		for(int j=0;j<3;j++)
		{
			int temp=arr[i][j];
			cout<<pow(temp,2)<<"\n";
		}

}

// reference passing just like pointers in c
void swaping(int &a ,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}


int main()
{

// function with default values such that if parameters not passed then also works
int x=sum(1);
int y=sum(2,6);
int z=sum(29,6,4);
cout<<"x="<<x<<"y="<<y<<"z="<<z<<"\n";

//passing by reference
int a=3 , b=4;
cout<<a<<" "<<b<<"\n";
swaping(a,b);
cout<<a<<" "<<b<<"\n";

swap(a,b); // inbuilt function to swap elements
cout<<a<<" "<<b<<"\n";

// arrays are always passed by references to the function
int ar[2][3]={1,2,3,4,5,6};
square(ar);

cout<<min(a,b)<<"\n"; // inbuilt function to find minimum
cout<<max(a,b)<<"\n"; // inbuilt function to find maximum

// if need to use array in function then instead of passing , array can be declared globally.
arr[0]=67;
cout<<arr[0]<<"\n"; // 67
func();
cout<<arr[0]<<"\n"; // 9

// lambda functions -->  functions which are created on the fly

cout<<[](int x){return x+2;}(2)<<"\n";

auto sum=[](int x,int y){return x+y;};
cout<<sum(3,5)<<"\n";

return 0;
}