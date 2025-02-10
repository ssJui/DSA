#include<bits/stdc++.h>
using namespace std;

const int n = 100;
vector<int> adj[n]; //adjacency list
bool visited[n];

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

    int vertices,edge;
    cin >> vertices >> edge;

    int x, y;
    for(int i = 0; i < vertices; i++){
        cin >> x >> y;
        adj[x].push_back(y); //adj[0].push_back(1); adj[0].push_back(2);
        adj[y].push_back(x); //adj[1].push_back(0); adj[2].push_back(0);
    }

    for(int i = 0; i < vertices; i++){
        visited[i] = false;
    }

    dfs(1);

    return 0;

}