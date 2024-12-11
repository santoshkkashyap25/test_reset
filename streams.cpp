#include<bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
	string input="apple 123";
	istringstream iss(input); // istringstream used to tokenize the string into types i.e. read all tokens from string
	string word1;
	int i;
	iss>>word1>>i; // stored as a string
	cout<<word1;
	cout<<i;

	ostringstream oss; // ostringstream to write output to the string buffer
	oss<<"Hello"<<12<<".\n"; // write to buffer 
	string word2 =oss.str(); // converts to string
	cout<<word2;

//  convert strings into ints,floats, or doubles
	string str = "90";
    stringstream ss(str); // initializing the stringstrem to string
    int temp=0;

    ss>>temp; // extracting the string into integer

    cout <<temp<<"\n";
}
 