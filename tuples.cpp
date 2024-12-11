#include<bits/stdc++.h>

using namespace std;

int main()
{

tuple<int , char ,float> t(10,'A',56.9); // tuple allows to group multiple values of different types into one unit
cout<<get<0>(t)<<"\n"; // access tuple values using the index and tuples are ordered
cout<<get<1>(t)<<"\n"; 
cout<<get<2>(t)<<"\n";


// extracting the values using the tie method
int a; // for holding the extracted tuple values
float b;
char c;
tie(a,b,c)=t; // tie method to extract
cout<<a<<"\n"; 
cout<<b<<"\n"; 
cout<<c<<"\n";

}