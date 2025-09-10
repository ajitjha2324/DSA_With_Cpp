#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
  private:
    void dfs(int start, vector<int>& visited, vector<int> adj[], vector<int>& ans){
      visited[start] = 1;
      ans.push_back(start);

      for(auto it : adj[start]){
        if(!visited[it]){
          dfs(it, visited, adj, ans);
        }
      }
    }

  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
     vector<int> ans;
     vector<int> visited(V, 0);
     dfs(0, visited, adj, ans);
     return ans;
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        q.push(0);

        vector<int> ans;
        vector<int> visited(V, 0);
        visited[0] = 1;

        while(!q.empty()){
          int node = q.front();
          q.pop();
          ans.push_back(node);

          for(auto it : adj[node]){
            if(!visited[it]){
              visited[it] = 1;
              q.push(it);
            }
          }
        }
        return ans;
    }
};
