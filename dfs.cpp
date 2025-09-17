#include <iostream>
using namespace std;
#include<unordered_map>
#include<vector>

void dfs(int node,unordered_map<int,vector<int>>&graph,int n,vector<int>&visited){
    cout<<node<<" ";
    visited[node]=1;
    for(auto nbr:graph[node]){
        if(!visited[nbr]){
            dfs(nbr,graph,n,visited);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // create adjacency list for graph.
    vector<vector<int>>edgelist={{0,1},{1,4},{1,2},{2,3}};
    int n=5; // why n==5 taken ? bcoz node=4 ke liye n=5 ka size required hai.
    unordered_map<int,vector<int>>graph;
    vector<int>visited(n,0);
    for(int i=0;i<edgelist.size();i++){
        int a=edgelist[i][0];
        int b=edgelist[i][1];
        
        graph[b].push_back(a);
        graph[a].push_back(b);

    }
    // adjacency list created successfully
    cout<<"dfs Order :- ";
    dfs(0,graph,n,visited);

    return 0;
}