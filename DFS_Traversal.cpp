#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& visited){
    visited[node] = true;
    cout<<node<<" ";

    for(int neighbor : adj[node]){
        if(!visited[neighbor]){
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int n = 5; 
    vector<vector<int>> adj(n);

    // Example Graph (Undirected)
    // 0 -- 1 -- 2
    // |    |
    // 4 -- 3
    adj[0] = {1, 4};
    adj[1] = {0, 2, 3};
    adj[2] = {1};
    adj[3] = {1, 4};
    adj[4] = {0, 3};

    vector<int> visited(n, false);
    dfs(0, adj, visited);
    cout << endl;

    return 0;
}