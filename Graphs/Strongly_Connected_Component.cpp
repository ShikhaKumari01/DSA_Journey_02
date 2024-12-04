#include<iostream>
#include<list>
#include<queue>
#include<vector>
#include<stack>
#include<unordered_map>
#include<algorithm>
#include<set>
#include<limits.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>>adjList;

    void addEdge(int u,int v,bool direction){
        adjList[u].push_back(v);
        if(direction==1){
            adjList[v].push_back(u);
        }
    }

    void dfs(int src,stack<int>&s,unordered_map<int,bool>&vis){
        vis[src]=true;
        
        for(auto i:adjList[src]){
            if(!vis[i]){
                dfs(i,s,vis);
            }
        }
        s.push(src);
    }
    void dfs1(int src,unordered_map<int,bool>&vis,unordered_map<int,list<int>>&adjListNew){
        vis[src]=true;
        cout<<src<<",";
        for(auto i:adjListNew[src]){
            if(!vis[i]){
                dfs1(i,vis,adjListNew);
            }
        }
    }
    int stronglyConnectedComponents(int n){
        stack<int>s;
        unordered_map<int,bool>visited;

        //topo Ordering
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,s,visited);
            }
        }
        
        //reverse all edges
        unordered_map<int,list<int>>adjListNew;
        for(auto t:adjList){
            for(auto nbr:t.second){
                int u=t.first;
                int v=nbr;
                adjListNew[v].push_back(u);
            }
        }
        
        //traverse using DFS
        int count=0;
        unordered_map<int,bool>visited2;

        while(!s.empty()){
            int node=s.top();
            s.pop();
            if(!visited2[node]){
                cout<<"Printing "<<count+1<<"th SCC:";
                dfs1(node,visited2,adjListNew);
                cout<<endl;
                count++;
            }
        }
        return count;
    }
};
int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,0,0);
    g.addEdge(2,4,0);
    g.addEdge(4,5,0);
    g.addEdge(5,6,0);
    g.addEdge(6,4,0);
    g.addEdge(6,7,0);
    int ans=g.stronglyConnectedComponents(8);
    cout<<ans;
    
}