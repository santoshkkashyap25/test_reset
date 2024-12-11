/*input
file.txt
*/
#include<bits/stdc++.h>

using namespace std; 

int main() 
{

string filename;
cin>>filename;

ifstream infile; // input file stream object
infile.open(filename);

// read each line of file and extract number present in each line and then sum the number sobtined in every line
// Example : 23Hello34 : 2334
//           12World3  : 123
int sum=0;
int count=0; // count the number of lines
string line;
while(getline(infile,line)) // allows to read file line by line
{
	int num=0;  // initially number is 0
	for(int i=0;i<line.size();i++) // line.size() means number of characters present in each line 
	{
		if(line[i]<'0' || line[i]>'9') // if char at ith postion is not in range of 0-9 then skip it
		{

		}
		else // char present is a number
		{
			num=num*10+(line[i]-'0'); // convert the char into int and form a number
		}
	}

	sum=sum+num; // sum of number obtained in each line
	count++; // increment the count of line
}

cout<<sum<<"\n";

infile.close();

return 0;
}