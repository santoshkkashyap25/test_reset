#include<bits/stdc++.h>
using namespace std;

void addEdge(int x, int y, vector<vector<int>> &adj) {
    adj[x].push_back(y);
    adj[y].push_back(x);
}

// DFS
void printParents(int node, vector<vector<int>> &adj, int parent) {
    if(parent == 0)
        cout << node << " : " << "root" << endl;
    else
        cout << node << " : " << parent << endl;

    for(auto cur : adj[node]) {
        if(cur != parent) // ensures each node visited once during traversal
            printParents(cur, adj, node);
    }
}

// BFS
void printChildren(int root, vector<vector<int>> &adj) {
	cout << "Children" << endl;
    queue<int> q;
    q.push(root);

    vector<int> vis(adj.size(), 0);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        vis[cur] = 1;
        cout << cur << " : ";
        for(auto child : adj[cur]) {
            if(vis[child] == 0) {
                cout << child << " ";
                q.push(child);
            }
        }
        cout << endl;
    }
}

void printLeaf(int root, vector<vector<int>> &adj) {
    cout << "Leaf nodes: ";
    for(int i = 0; i < adj.size(); i++) {
        if(adj[i].size() == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printdegree(int root , vector<vector<int>> &adj )
{
	cout<<"Degree Of Node\n";
	for(int i=1;i<adj.size();i++)
	{
		if(i==root)
			cout<<i<<" : "<<adj[i].size()<<endl;
		else if (adj[i].size()==0)
			continue;
		else 
			cout<<i<<" : "<<adj[i].size()-1<<endl;
	}
}

int main() {
    int N = 8;
    vector<vector<int>> adj(N + 1, vector<int>());

    addEdge(5, 2, adj);
    addEdge(5, 3, adj);
    addEdge(5, 4, adj);
    addEdge(2, 8, adj);
    addEdge(2, 6, adj);
    addEdge(4, 7, adj);

	cout << "Parents" << endl;
    printParents(5, adj, 0);

    printChildren(5, adj);

    printLeaf(5, adj);

    printdegree(5,adj);

    return 0;
}
