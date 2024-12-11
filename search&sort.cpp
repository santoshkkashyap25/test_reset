#include <bits/stdc++.h>
using namespace std;

// comparator function

bool should_swap(int a, int b) // comparator function for the vector and array
{
	if(a<b) return true;
	return false;
}

bool should_swap(pair<int,int> a,pair<int,int> b) // comp func for the vector of pairs of int
{
	if(a<b) return true;
	return false;
}

bool swap_pair(pair<int,int>a,pair<int,int> b) // sorts based on first in decreasing order and if both are same then based on second in increasing order
{
	if(a.first!=b.first) // if not same and a>b then swap to get in decreasing order 
	{
		if(a.first>b.first) return false; 
		else return true;
	}
	else
	{
		if(a.second<b.second) return false;
		return true;
	}
}

bool swap_shortend(pair<int,int>a,pair<int,int> b) // same as above with less code
{
	if(a.first!=b.first)
		return a.first<b.first; // changed the comparision signs as specified in-built swaps when false is returned
	return a.second>b.second;
}

bool comp(string x, string y) // comparator function for the strings
{
	if (x.size()!=y.size()) // if their sizes are different then compare based on size and return lowest
		return x.size()<y.size();
	return x<y; // alphbetically sort
}

int main()
{

// sorting , reversing, reshuffling the array
int arr[]={1,2,2,2,2,4,5,6,7};
int n=9;
reverse(arr,arr+n); // reverses the array
random_shuffle(arr,arr+n); // shuffling the array
sort(arr,arr+n); // also possible e.g. sort(arr+2, arr+5); sorts only 2 to 5 eleements

for(auto x: arr)
cout<<x<<"-";
cout<<"\n";

// sorting the vectors
vector<int> vi{5,3,1,8,4};
sort(vi.begin(), vi.end()); // also posssible e.g. sort(vi.began()+2,vi.end());
reverse(vi.begin(),vi.end());
random_shuffle(vi.begin(),vi.end());

for(auto x:vi)
cout<<x<<"-";
cout<<"\n";

for(int i=0;i<vi.size();i++) // O(n^2) function for sorting without calling comparator function
	for(int j=i+1;j<vi.size();j++)
		if(vi[i]>vi[j])
			swap(vi[i],vi[j]);


for(int i=0;i<vi.size();i++)
	cout<<vi[i];
cout<<"\n";

for(int i=0;i<vi.size();i++)
	for(int j=i+1;j<vi.size();j++)
		if(should_swap(vi[i],vi[j])) // compartor function defined now it does same without change
			swap(vi[i],vi[j]);

for(int i=0;i<vi.size();i++)
	cout<<vi[i];
cout<<"\n";

// sorting the vector of pairs
vector<pair<int,int>> vecp;
vecp.push_back({1,2});
vecp.push_back({2,3});
vecp.push_back({0,8});
vecp.push_back({2,5});
sort(vecp.begin(),vecp.end());

for(int i=0;i<vecp.size();i++) // using the same previous approach
	for(int j=i+1;j<vecp.size();j++)
		if(should_swap(vecp[i],vecp[j])) 	
			swap(vecp[i],vecp[j]);

for(int i=0;i<vecp.size();i++)
	cout<<vecp[i].first<<" "<<vecp[i].second<<"\n";
cout<<"\n";

for(int i=0;i<vecp.size();i++) // customising the comparator function
	for(int j=i+1;j<vecp.size();j++)
		if(swap_pair(vecp[i],vecp[j]))
			swap(vecp[i],vecp[j]);

for(int i=0;i<vecp.size();i++)
	cout<<vecp[i].first<<" "<<vecp[i].second<<"\n";
cout<<"\n";

// this would function differently even having using same coparartor function as it is in-built and for swapping in it needed return to be false
sort(vecp.begin(),vecp.end(),swap_pair);

for(int i=0;i<vecp.size();i++)
	cout<<vecp[i].first<<" "<<vecp[i].second<<"\n";
cout<<"\n";

sort(vecp.begin(),vecp.end(),swap_shortend); 

for(int i=0;i<vecp.size();i++)
	cout<<vecp[i].first<<" "<<vecp[i].second<<"\n";
cout<<"\n";

// using the in-built comparator function e.g. greater
sort(vecp.begin(),vecp.end(),greater<pair<int,int>>()); 

cout<<"Greater\n";
for(int i=0;i<vecp.size();i++)
	cout<<vecp[i].first<<" "<<vecp[i].second<<"\n";
cout<<"\n";

// sorting the tuples
vector<tuple<int,int,int>> t;
t.push_back({1,5,6});
t.push_back({1,5,3});
t.push_back({0,5,6});
sort(t.begin(),t.end());

cout<<"\n";

// sorting the strings
string s="monkey";
sort(s.begin(),s.end());
cout<<s<<"\n";

// comparator function to customise the sorting
vector<string> w={"santosh","Kumar"};
sort(w.begin(),w.end(),comp);
cout<<w[0]<<"\n";

// searching

sort(arr,arr+n);
int x=2;

// lower bound and upper bound works on sorted array only
auto k=lower_bound(arr,arr+n,x)-arr; // lower bound returns same number or greater number
if (k<n && arr[k]==x)
cout<<k+1<<"\n";

auto a=lower_bound(arr,arr+n,x);
auto b=upper_bound(arr,arr+n,x); // upper bound returns greater number always
cout<<b-a<<"\n";                 // count number of elements for given value

auto e= equal_range(arr,arr+n,x); // count number of elements for given value
cout<<e.second-e.first<<"\n";

set<int> st;
for(int i=0;i<(int)1e6;++i)
	st.insert(rand());

for(int i=0;i<(int)1e5;++i)
{
	auto it =st.lower_bound(rand()); // correct way to make sure lower_bound and upper_bound runs in O(logn) for sets and map
}

int minimum=*(min_element(vi.begin(),vi.end()));
cout<<minimum<<"\n";

int maximum=*(max_element(vi.begin(),vi.end()));
cout<<maximum<<"\n";

int sum =accumulate(vi.begin(),vi.end(),0); // 0 is the initial sum which get adds up in the final sum 
cout<<sum<<"\n"; 

int ct=count(vi.begin(),vi.end(),3); // count of a specific element
cout<<ct<<"\n";

int element =*(find(vi.begin(),vi.end(),3)); // finds the location of element
cout<<element<<"\n";

cout<< all_of(vi.begin(),vi.end(),[](int x){return x>0;}); // using lambda function and every should be true then true

cout<< any_of(vi.begin(),vi.end(),[](int x){return x>0;}); // any of true then true

cout<< none_of(vi.begin(),vi.end(),[](int x){return x>0;}); // none should be true then true

// all of above functions suitable for arrays and the restricted addressing
}