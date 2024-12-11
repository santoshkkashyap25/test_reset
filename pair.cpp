#include<bits/stdc++.h>
using namespace std;

int main()
{
pair<int,string> pair1;
pair1={3,"abcd"}; // OR p=make_pair(2,"abcd")

pair<int, string> &pair2=pair1; // reference passing changes value
pair1.first=89;
cout<<pair1.first<<" "<<pair2.second<<"\n";


pair<int ,int > arrOfPairs[3]; // array of pairs of int and int
arrOfPairs[0]={1,2};
arrOfPairs[1]={8,9};
arrOfPairs[2]={7,5};

swap(arrOfPairs[0],arrOfPairs[2]); // swaping pairwise

for(int i =0;i<3;i++)
{
	cout<<arrOfPairs[i].first<<" "<<arrOfPairs[i].second<<"\n";
}

// comparison of pairs
pair<int ,int > p1,p2,p3;
p1={2,2};
p2={1,2};
p3={2,3};
cout<<(p1<p2);
cout<<(p1>p2);
cout<<(p1<p3); // compares on second if first are same

}