#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<int>> adjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        adjMat[u][v] = weight;
        adjMat[v][u] = weight;
    }

    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}