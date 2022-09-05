#include<bits/stdc++.h>
using namespace std;
bool CheckforCycle(int s,int V,vector<int> adj[],vector<int> &vis){

    queue<pair<int,int>> q;
    q.push({s,-1});
    vis[s]=true;
    while (!q.empty())
    {
      int node=q.front().first;
      int par=q.front().second;
      q.pop();

      for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=true;
                q.push({it,node});
            }
            else if(par!=it){
                return true;
            }
      }
    }
    return false;
    
}

bool checkforcycle(int node,int parent,vector<int> &vis,vector<int> adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(vis[it]==0){
            if(checkforcycle(it,node,vis,adj)) return true;
        }else if(it!= parent){return true;}
    }
    return false;
}


bool isCycle(int V,vector<int> adj[]){
    vector<int> vis(V+1,0);
    for(int i=1;i<=V;++i){
        if(!vis[i]){
            if(CheckforCycle(i,V,adj,vis)) return true; //for bfs;
            // if(checkforcycle(i,-1,vis,adj)) return true; for dfs
        }
    }
    return false;
}