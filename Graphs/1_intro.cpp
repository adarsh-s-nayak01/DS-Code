#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    //declare adjacency matrix
    int a[n+1][n+1];

    //take input for edges.
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }

    //declare an adjacency list.
    vector<int> adj[n+1];

    //make inputs 
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>n;
        adj[u].push_back(v);
        adj[v].push_back(u);//if directed graph omit this.
    }
    return 0;
}