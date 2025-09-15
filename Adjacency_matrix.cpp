// Adjacency Matrix representation in C++

#include <iostream>
using namespace std;
#include<vector>
void viewgraph(vector<vector<int>>&adjacency_matrix){
    for(int i=1;i<adjacency_matrix.size();i++){
        cout<<"Node "<<i<<" Neighbour :- ";
        for(int j=1;j<=adjacency_matrix[i].size();j++){
            if(adjacency_matrix[i][j]==1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
int main() {
  vector<vector<int>>edgelist={{1,2},{2,3},{3,4},{4,2},{1,3}};
  int n=edgelist.size();
  vector<vector<int>>adjacency_matrix(5,vector<int>(5,0));
  for(int i=0;i<edgelist.size();i++){
    int a=edgelist[i][0],b=edgelist[i][1];
    adjacency_matrix[a][b]=1;
    adjacency_matrix[b][a]=1;

    }
    viewgraph(adjacency_matrix);
    return 0;
}