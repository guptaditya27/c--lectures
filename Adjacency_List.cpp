#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
void print(unordered_map<int,vector<int>>&adjacencylist){
    for(auto X:adjacencylist){
        cout<<"Node "<<X.first<<" Neighbour:- ";
        for(int node:X.second){
            cout<<node<<" ";
        }
        cout<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>edgelist={{1,2},{2,3},{3,4},{4,2},{1,3}};
    unordered_map<int,vector<int>>adjacencylist;
    for(int i=0;i<edgelist.size();i++){
        int a=edgelist[i][0],b=edgelist[i][1];
        adjacencylist[a].push_back(b);
        adjacencylist[b].push_back(a);

    }
    print(adjacencylist);
    return 0;
}