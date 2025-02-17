#include <bits/stdc++.h>
using namespace std;

void bellman_ford(int S, vector<vector<int>> &edges) {

    int V = edges.size();
    vector<int> dist;
    dist.assign(V, 1e8); 
    dist[S] = 0;         

    // Relax all edges (V-1) times
    for (int i = 0; i < V - 1; i++) {
        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // Nth relaxation to check negative cycle
    for (auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
            dist.assign(1, -1); // If negative cycle detected, return {-1}
            return;
        }
    }

    for (int d : dist) {
        cout << d << " ";
    }
    cout << endl;
}

int main() {
    int V, E, S; 
    cin >> V >> E >> S;

    vector<vector<int>> edges; 
    
    for (int i = 0; i < E; i++) {
        int u, v, w;  
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    bellman_ford(S, edges);

    return 0;
}
