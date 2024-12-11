#include<bits/stdc++.h>

using namespace std;

int fact(int n) // Direct Recursion
{
	if(n==0) // base condition to avoid stack overflow
		return 1;
	else
		return n*fact(n-1);
}

int fa(int);

int fb(int n) // Indirect Recursion
{
	if(n==0)
		return 1;
	else
		return n*fa(n-1);
}

int fa(int n)
{ 
	if(n==0)
		return 1;
	else
		return n*fb(n-1);
}

// recursive function to copute the digits sum
int digit_sum(int n) // sum of all the digits in the number
{
	if(n==0) return 0; // base condition
	return digit_sum(n/10)+(n%10);
}

int main()
{
	int x=fa(5); // using indirect recursion
	cout<<"factorial(5)="<<x<<"\n";

	int y=fact(6);//O(1)*n // using direct recursion
	cout<<"factorial(6)="<<y<<"\n";

	cout<<digit_sum(657)<<"\n"; //O(d)=O(logn base 10)
	return 0;

}