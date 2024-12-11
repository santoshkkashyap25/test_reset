/*input
3
Santosh
kumar
kashyap
-9
-8
78
1
2
3
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{	

	int a;
	cin>>a;
	cin.ignore(); // ignores the line as without this the getline will be reading same line after input 3
	cin>>ws;      // OR this can used to read the whitespaces afterwards input 3 so getline starts from next line
	while(a--) 
	{
		string s;
		getline(cin,s);
		cout<<s<<"\n";
	} 
		
	// functions depicting how do while can be used continously scan till positive number arises
	int n;
	do
	{
		cin>>n;
		cout<<n<<"\n";
	}
	while(n<1);


	// #include<iomanip> to include these manipulators
	for (int i = 2; i <=2000; i *= 10) 
	{ 
	cout<<left<<setw(4)<<setfill('-')<<i<<right<<setw(8)<<setfill('~')<<fixed<<setprecision(2)<<sqrt(i)<<endl;
	}

return 0;
}