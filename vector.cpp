/*input
2
2
3 4
3
5 6 7
2
2
345 567
2
34 5689
2
2
345 567
2
34 5689
*/
#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v)
{
    for(int i=0;i<v.size();i++) // size has O(1)
    	cout<<v[i]<<" ";
    cout<<"\n"; 
}

// prints vector of pairs
void print_vector_pair(vector<pair<int,int >> &v) // Reference passing to make changes directly on it.
{
	for(int i=0;i<v.size();i++)
		cout<<v[i].first<<" "<<v[i].second<<"\n";
}

int main()
{

vector<int> vec1; //dynamic size arrays
vec1.push_back(2); //pushes at end in O(1)
vec1.push_back(3);
vec1.push_back(5);

cout<<vec1[0]<<"\n";
cout<<vec1[1]<<"\n";
cout<<vec1[2]<<"\n";

print_vector(vec1);

vec1.pop_back(); // pop_back method O(1)
cout<<vec1.back()<<"\n";

vector<int> vec2(10); //creates an vector of size 10 initialized with 0
vector<int> vec3(10,5); //creates an vector of size 10 initialized with given value
vec3.push_back(8);
print_vector(vec2);
print_vector(vec3);

vector<int> vec4=vec1; // vec1 becomes copy of vec4 so changes in vec4 does not effect vec1. - O(n)

// reference passing should be used as copy is expensive operation


vector<pair<int ,int >> vecp1={{1,3},{2,3},{5,6},{3,7}};  // vector of pairs
print_vector_pair(vecp1);

vector<int> arrOfVec[10]; // array of 10 vectors and initialially each having size 0
int N; 
cin>>N; // enter the number of vectors to be filled
for(int i=0;i<N;i++)
{
	int n;
	cin>>n; // enter the number of element to be filled in each vector
	for(int j=0;j<n;j++)
	{
		int x;
		cin>>x; // enter the elements to be filled
		arrOfVec[i].push_back(x);
	}
}

for(int i=0;i<N;i++)
{
	print_vector(arrOfVec[i]);
}


vector<vector<int>> vecOfVec; // vector of vectors
int M; // enter the number of vectors to be filled
cin>>M;
for(int i=0;i<M;i++)
{
	int n;
	cin>>n; // enter the number of elements to be filled
	vector<int> temp;
	for(int j=0;j<n;j++)
	{
		int x;
		cin>>x;
		temp.push_back(x);
	}
	vecOfVec.push_back(temp);
}

for(int i=0;i<vecOfVec.size();i++)
{
	print_vector(vecOfVec[i]);
}

vector<int> vec5{2,3,1,4,6};
vector<int > :: iterator it=vec5.begin(); // iterator
cout<<(*(it+0))<<"\n";

for(it=vec5.begin();it!=vec5.end();it++) // loop till equal end +1 .
{
	cout<<*it<<"\n";
}

vector<pair<int,int>> vecp2={{1,2},{3,4},{4,7}};  
vector<pair<int,int>> :: iterator itp; // pair iterators

for(itp=vecp2.begin();itp!=vecp2.end();itp++)
{
	//cout<<(*itp).first<<" "<<(*it1p).second<<"\n";
	cout<<(itp->first)<<" "<<(itp->second)<<"\n";

}

// Range based Loop or for each loop

for(auto x:vec1) // for each loop to iterate over vector , // auto itself finds datatype of the iterator
	cout<<x<<"\n";

for(int value: vec5) // Actually a copy of vector
{
	value++; // wont have any effect as it is just a copy
	cout<<value<<"\n";
}

// for(int &value: vec5) --> referencing used


for(pair<int,int> &value:vecp2)  // for(auto &value:vecp2)
{
	cout<<value.first<<" "<<value.second<<"\n";
}

vec5.erase(std::remove(vec5.begin(), vec5.end(), 2), vec5.end()); // to remove all occurrences of element

}