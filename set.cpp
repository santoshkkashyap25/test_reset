#include<bits/stdc++.h>
using namespace std;

void print_set(set<string> &s) // prints the set element using iterator
{
	for(auto its=s.begin();its!=s.end();its++)
		cout<<*its<<"\n";
}

void print_multiset(multiset<string> &s) // prints element of multiset
{
	for(string value:s)
		cout<<value<<"\n";
}

int main()
{

set<string> set1;
set1.insert("a"); // O(logn)
set1.insert("b");
set1.insert("c");
set1.insert("d");
set1.insert("e");

// output the set elements using for each loop
for(string value:set1)
	cout<<value<<"\n";

// output set elements using set iterator 
print_set(set1);


auto its=set1.find("a"); // same as map O(logn)
if(its!=set1.end())
{
	cout<<"found="<<*its<<"\n";
}

set1.erase(*its); // erases the element given its iterator
set1.erase("b"); // works fine with element also
print_set(set1); // set printed in sorted order

set<int> s={1,2,3,4,5};
set<int>::iterator it=s.begin(); // set iterator
cout<<*it<<"\n";

for(s.begin();it!=s.end();it++)
	cout<<*it<<"\n";

auto it1=s.end(); // access last element
cout<<*it<<"\n";

set<int> set2;
set2.insert(1);
set2.insert(2);
set2.insert(3);
set2.insert(3);
cout<<set2.count(3)<<"\n"; // can be used as whether a element present or not
set2.erase(3);
cout<<set2.count(3)<<"\n";

set<int> set3={2,3,4,5,5,6,6}; // way of initializng the set
for(auto x:set3) // for each loop - 'auto' detects it is set
	cout<<x<<"\n";

cout<<set3.size()<<"\n"; // counts the number of element

unordered_set<string > unorderedSet; // unordered set : rest functions same as set

multiset<string> mset1 ;  // multiset - allows duplicates

mset1.insert("a"); //O(logn)
mset1.insert("b");
mset1.insert("b");
mset1.insert("a");
mset1.insert("b");
mset1.insert("c");

auto itm=mset1.find("a"); // O(logn)
if(itm!=mset1.end())
{
	cout<<*itm<<"\n"; // returns first iterator of element present
}

mset1.erase(*itm); // passing iterator to erases only that element
mset1.erase("b"); // passing paticular element erases all of that element

print_multiset(mset1); // set printed in sorted order

multiset<int> mset2={5,5,5};
cout<<mset2.count(5)<<"\n"; // 3
mset2.erase(5); // all 5 erased
cout<<mset2.count(5)<<"\n"; // 0

multiset<int> mset3={7,7,7};
mset3.erase(mset3.find(7)); // find returns an iterator so only 1 will be erased
cout<<mset3.count(7)<<"\n"; // 2

}