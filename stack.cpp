#include <bits/stdc++.h>
using namespace std;

int main()
{

stack<int>st; // stack
st.push(2); // push into stack
st.push(3);
st.push(5);

cout<<st.top()<<"\n"; // topmost elemnet- L I F O
st.pop(); // removes the top element
cout<<st.top()<<"\n";

// iterating over the stack
while(!st.empty())
{
	cout<<st.top()<<"\n";
	st.pop();
}

queue<int> q; // queue -- FIFO
q.push(1); // pushing elements
q.push(2);
q.push(4);

cout<<q.front()<<"\n";
q.pop();
cout<<q.front()<<"\n";

deque<int> dq; // In doubly ended queue elements can be pushed and poped from both sides
dq.push_back(10);
dq.push_back(9);
dq.push_front(111);
dq.pop_back();
dq.pop_front();

for(auto x:dq)
cout<<x<<"\n";


priority_queue<int> pq; // priority queue stores element in some priority e.g greater elements can have more priority
pq.push(2);
pq.push(7);
pq.push(1);

cout<<pq.top()<<"\n";
pq.pop(); // pops the higher priority element first
cout<<pq.top()<<"\n";


priority_queue<int, vector<int>, greater<int>> min_heap; // priority queue can be modified to min heap otherwise by default it is max heap
min_heap.push(5);
min_heap.push(3);
min_heap.push(7);
min_heap.push(1);
min_heap.push(2);

cout << "The minimum value in the min heap is: " << min_heap.top() << endl;

}


