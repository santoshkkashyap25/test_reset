#include <bits/stdc++.h>
using namespace std;

struct listnode
{
    int data ;
    listnode* next;

    listnode(int data , listnode*next)
    {  
        data=data;
        next=next;
    }

    listnode() 
    {
        data=0;
        next=nullptr;
    }
};

int main() 
{
    listnode* front =new listnode();
    front->data=43;
    front->next=new listnode(); 
    front->next->data = -3;
    front->next->next = new listnode();
    front->next->next->data = 17;
    front->next->next->next = nullptr;

    for(listnode*ptr=front;ptr!=nullptr;ptr=ptr->next)
    {
        cout<<ptr->data<<"\n";
    }
}
