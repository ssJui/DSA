#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

void dijkstra(int S, vector<vector<pii>> &adj) {

    int V = adj.size();
    vector<int> distTo;
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    distTo.assign(V, INT_MAX);

    distTo[S] = 0;
    pq.push({0, S});

    while (!pq.empty()) {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node]) {
            int v = it.first;
            int w = it.second;

            if (dis + w < distTo[v]) {
                distTo[v] = dis + w;
                pq.push({distTo[v], v});
            }
        }
    }

    for (int i = 0; i < V; i++) {
        cout << distTo[i] << " ";
    }
    cout << endl;
}

int main() {
    int V, E, S; //vertices, edges, source
    cin >> V >> E >> S;

    vector<vector<pii>> adj(V);

    for(int i = 0; i < E; i++){
        int u, v, w;  //node1, node2, weight
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    
    dijkstra(S, adj);

    return 0;
}
