//Strongly Connected Components

//Step 1 : DFS on original graph
//Step 2 : Transpose the graph
//Step 3 : DFS on transposed graph

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<vector<int>> adj, revAdj;
vector<bool> visited;
stack<int> Stack;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
    Stack.push(v);
}

void reverseDfs(int v) {
    visited[v] = true;
    cout << v << " ";
    for (int u : revAdj[v]) {
        if (!visited[u])
        reverseDfs(u);
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    
    adj.resize(V);
    revAdj.resize(V);
    
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        revAdj[v].push_back(u);
    }

    visited.assign(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i])
            dfs(i);
    }

    visited.assign(V, false);
    while (!Stack.empty()) {
        int v = Stack.top(); Stack.pop();
        if (!visited[v]) {
            reverseDfs(v);
            cout << endl;
        }
    }
    
    return 0;
}
