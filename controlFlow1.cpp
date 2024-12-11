/*input
345
1
2
3
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	cout<<"1.for"<<"\n";
	int l;
	for(l=1;l<6;l++)
	{
		if(l==3)
		continue; // only skip the current iteration
		cout<<l<<"\n";
	}

	cout<<"2.while"<<"\n";
	int m=1;
	while(m<6)
	{
		if(m==2)
		{
			m++; // always need to be placed before continue otherwise indefinately runs
			continue;
		}
		cout<<m<<"\n";
		m++;
	}

	cout<<"3.do-while"<<"\n";
	int p=1;
	do
	{
		if(p==2)
		{
			p++;
			continue;
		}
		cout<<p<<"\n";
		p++;
	}
	while(p<6);

	// switch case without break
	cout<<"1."<<"\n";
	int num=4;
	switch(num+2) // switch(expression)
	{
		case 1: cout<<"Case 1"<<"\n";
		case 2: cout<<"Case 2"<<"\n";
		case 3: cout<<"Case 3"<<"\n";
		case 4: cout<<"Case 4"<<"\n";
		default:cout<<"default Case"<<"\n";

	}

	cout<<"2."<<"\n"; // fall through : from first match every next case will be printed
	num=2;
	switch(num)
	{
		case 1: cout<<"Case 1"<<"\n";
		case 2: cout<<"Case 2"<<"\n";
		case 3: cout<<"Case 3"<<"\n";
		case 4: cout<<"Case 4"<<"\n";
		default:cout<<"default Case"<<"\n";
	}


	cout<<"3."<<"\n"; // working correct switch
	num=3;
	switch(num)
	{
		case 1: cout<<"Case 1"<<"\n";
		break;
		case 2: cout<<"Case 2"<<"\n";
		break;
		case 3: cout<<"Case 3"<<"\n";
		break;
		case 4: cout<<"Case 4"<<"\n";
		break;
		default:cout<<"default Case"<<"\n";

	}

	cout<<"4."<<"\n"; // char switch
	char ch='c';
	switch(ch)
{   	case 'a': cout<<"Case 1"<<"\n";
		break;
		case 'b': cout<<"Case 2"<<"\n";
		break;
		case 'c': cout<<"Case 3"<<"\n";
		break;
		case 'd': cout<<"Case 4"<<"\n";
		break;
		default:cout<<"default Case"<<"\n";
}

	// detecting whether two strings are palindrome( if reads forwards and backwards same) 
	string str1="racecar";
	string str2;
	int n=str1.size(); // used to get the string size
	for(int j=n-1;j>=0;j--) // starting from end till 0'th index
	{
		str2.push_back(str1[j]); // pushing the charcters of original to new string but reverse
	}
	if(str1==str2) // checking if both are equal
	{
		cout<<"Palindrone\n";
	}

	// checking palindrome using only one string
	int flag=1;	
	for(int j=n-1;j>=(n/2);j--) // iterating only till the middle
	{
		if(str1[j]!=str1[n-j-1]) // likewise if first and last are same then only chance of getting the palindrome further
		{
			flag=0; // if not equal then set flag 0 and break the loop
            break;
		}
	}
	if(flag==1)
		cout<<"Palindrone\n";
	else
		cout<<"Not Palindrone\n";

	
	// do while loop: loop will run atleast one time any how 
	int i=0;
	int arr[]={12,78,90,78,45};
	do
	{
		cout<<arr[i]<<"\n";
		i++;
	}
	while(i<0);

	// break statement
	cout<<"break";
	int j=1;
	while(j<5)
	{
		if(j==3)
		break;
		cout<<j<<"\n";
		j++;
	}

	// storing and retrieving Big Numbers in the form of strings
	string big_num ;

	getline(cin,big_num);
	cout<<big_num<<"\n";

	int len=big_num.size();
	cout<<(int)big_num[len-1]-'0'<<"\n"; // converts the char at given index to int value

	return 0;
}