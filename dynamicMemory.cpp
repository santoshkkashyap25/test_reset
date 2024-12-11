#include<bits/stdc++.h>

using namespace std;

int main()
{
	int *list=(int*)malloc(3*sizeof(int)); // allocated 3 blocks of integer
	if (list== NULL) // checks if allocation is successful
	{
		return 1;
	}

	list[0]=1; //*list=1; assigning values to allocated memory 
	list[1]=2; //*(list+1)=2;
	list[2]=3; //*(list+2)=3;

	int *temp1=(int*)realloc(list,4*sizeof(int)); // reallocating the list to accommodate bigger list created on heap
	if(temp1==NULL) 
	{
		free(list); // free the original list also if allocation is not successfull
		return 1;
	}

	// creating bigger list without using the realloc
	int * temp2=(int*)malloc(4*sizeof(int)); // allocated 4 blocks of integer

	for (int i = 0; i < 3; i++)
	{
		temp2[i]=list[i]; // copy the original list content into temp2 without using the realloc
	}

	temp2[3]=35; // manipualting the temp2 item

	for(int i=0;i<4;i++)
	{
	cout<<temp2[i]<<"\n";
	}

	free(list); // free the resource after use to avoid dangling pointer
	free(temp); 

}

