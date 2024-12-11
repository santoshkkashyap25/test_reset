#include<bits/stdc++.h>
using namespace std;

class BST
{

	int data;
	BST * left , *right;

public:
	BST();

	BST(int);
};

BST :: BST() :data(0) , left(NULL) , right(NULL)
{
	
}


BST :: BST(int value)
{
	data=value;
	left=NULL;
	right=NULL;
}

int main()
{
	BST  * root =new BST();
}