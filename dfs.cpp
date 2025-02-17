#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; //adjacency list
vector<bool> visited;

void dfs(int node){
    visited[node] = true;
    cout << node << " ";

    for(int i : adj[node]){
        if(!visited[i]){
            dfs(i);
        }
    }
}

int main(){

    int vertices,edges;
    cin >> vertices >> edges;

    adj.resize(vertices);
    visited.assign(vertices, false);

    int x, y;
    for(int i = 0; i < edges; i++){
        cin >> x >> y;
        adj[x].push_back(y); //adj[0].push_back(1); adj[0].push_back(2);
        adj[y].push_back(x); //adj[1].push_back(0); adj[2].push_back(0);
    }

    for (int i = 0; i < vertices; i++) {  
        if (!visited[i]) {
            dfs(i);
        }
    }

    return 0;

}