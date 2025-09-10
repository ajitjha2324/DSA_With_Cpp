#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, vector<bool>& visited){
    queue<int> q;
    q.push(start);

    visited[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
    
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout<<endl;
}

int main(){
    int n = 5;
    vector<vector<int>> adj(n);

    // Example Graph (Undirected)
    // 0 -- 1 -- 2
    // |    |
    // 4 -- 3
    adj[0] = {1,4};
    adj[1] = {0,2,3};
    adj[2] = {1};
    adj[3] = {1,4};
    adj[4] = {0,3};

    vector<bool> visited(n, 0);
    bfs(0, adj, visited);
}