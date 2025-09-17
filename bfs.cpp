#include <iostream>
using namespace std;
#include<queue>
#include<vector>
#include<unordered_map>
void bfs(int source,unordered_map<int,vector<int>>&graph,int n){
    queue<int>q;
    vector<int>visited(n+1,0);
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        cout<<f<<" ";
        for(int nbr:graph[f]){
            if(!visited[nbr]){
                visited[nbr]=1;
                q.push(nbr);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>edgelist={{0,1},{1,4},{1,2},{2,3}};
    unordered_map<int,vector<int>>adjacencylist;
    for(int i=0;i<edgelist.size();i++){
        int a=edgelist[i][0],b=edgelist[i][1];
        adjacencylist[a].push_back(b);
        adjacencylist[b].push_back(a);

    }
    cout<<"BFS Order :- ";
    bfs(0,adjacencylist,4);

    return 0;
}