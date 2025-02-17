#include<bits/stdc++.h>
using namespace std;

stack<int> s;

void dfs(int node, vector<bool> &visited, vector<vector<int>> &adj){

    visited[node] = true;
    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, visited, adj);
        }
    }
    s.push(node);    
}

int main(){

    int n, m;

    cin >> n >> m;

    vector<bool> visited;
    vector<vector<int>> adj(n);

    visited.assign(n, false);

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            dfs(i, visited, adj);
        }
    }

    vector<int> ans;

    while(!s.empty()){
       ans.push_back(s.top());
       s.pop();
    }

    for(int i = 0; i < n; i++){
        cout << ans[i];
    }

}