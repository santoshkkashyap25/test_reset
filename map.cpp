/*input
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
*/

#include<bits/stdc++.h>

using namespace std;

void print_map(map<string,int > &m) // prints the map elements using the for each loop
{
	for(auto &x:m) // iterate over the keys takes nlogn
		cout<<x.second<<" "<<x.first<<"\n";
}

int main()
{

// map
map<string,int> m; // map : ordered and sorted
m["banana"]=4;
m["apple"]=5;
m["potato"]=6;
m["potato"]=90; // overwrites the earlier one

m.insert({"potato",89}); // insert key with value but do not overwrites keeps the earlier one

print_map(m);

map<string,int> :: iterator it; // map iterator
for(it=m.begin();it!=m.end();++it) // better to use ++it
{
	cout<<(*it).first<<" "<<(*it).second<<"\n";
}

m["pea"]; // create a key with 0 value or Null  : O(logn)
print_map(m);

cout<<m["apple"]<<"\n";
cout<<m["tomato"]<<"\n"; // outputs 0 as no key present but inserts it with value 0 
print_map(m);


map<string,int> :: iterator itr=m.find("Nuts"); //O(logn) and if nothing found then returns m.end() iterator

if(itr==m.end())
{
	cout<<"No element"<<"\n";
}
else
{
cout<<(*itr).first<<(*itr).second<<"\n";
}

m.erase("pea"); // O(logn) & giving non existing iterator/key to erase gives segmentattion fault

if(itr!=m.end()) 
	m.erase(it);

// m.clear(); // clears container 

print_map(m);

if(m.count("delhi")) // can be a way to check if key is present or not as it will return 1 or 0
	cout<<"Key exist";
else
	cout<<"Key not exist"<<"\n";

// space complexity is more
map<string,string> dict;
dict["abcd"]="abcd"; // Space= sizeofString*O(logn)

unordered_map<int ,string> unorderedMap; // unordered map

// unodered map with pair as key won't work as pair does not have pre-defined hash function. pair can be compared but can't be hashed.
// unordered_map<pair<int ,int > ,string> unmap_pair;

map<pair<int ,int > ,string> map_pair; // okay

// duplicate keys are allowed
multimap<int,int > mmap;
mmap.insert({3,12});
mmap.insert(make_pair(3,4));
cout<<"multimap="<<mmap.count(3)<<"\n"; // 2


// nesting of map and pair
map<pair<int,int >,int > mp;

// nesting of map and set
map<set<int>,int> ms;

// nesting of map , pair , vector
map<pair<string,string>,vector<int>> mpv;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	string fn,ln; // pair
	int count; // vector
	cin>>fn>>ln>>count;
	for(int j=0;j<count;j++)
	{
		int x;
		cin>>x;
		mpv[{fn,ln}].push_back(x); // mpv[{key}] gives vector so push_back works fine
	}
}

for(auto &pr: mpv) // iterating through mpv
{
	auto &full_name=pr.first; // pair
	auto &list=pr.second; // vector

	cout<<full_name.first<<" "<<full_name.second<<" ";
	cout<<list.size()<<"\n"; // vector size
	for(auto &element: list)
	{
		cout<<element<<" ";
	}
	cout<<"\n";
}

}

