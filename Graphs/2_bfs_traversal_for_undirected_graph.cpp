#include<bits/stdc++.h>
using namespace std;

vector<int> bfs_for_graph(int n,vector<int> adj[]){

    vector<int> bfs;
    vector<int> vis(n+1,0);

    for(int i=1;i<=n;++i){
        if(!vis[i]){
            //apply bfs
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
            return bfs;
        }
    }
}


// int main(){

// }