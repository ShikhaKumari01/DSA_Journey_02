#include<iostream>
#include<list>
#include<queue>
#include<vector>
#include<stack>
#include<unordered_map>
#include<algorithm>
#include<limits.h>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;

    void addEdge(int u,int v,int w,bool direction){
        adjList[u].push_back({v,w});
        if(direction==0){
            adjList[v].push_back({u,w});
        }
    }

    void printAdjList(){
        for(auto i:adjList){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<")";
            }
            cout<<endl;
        }
    }

    
    void topoSortDFS(int src,unordered_map<int,bool>&visited,stack<int>&ans){
        visited[src]=true;
        for(auto nbr:adjList[src]){
            if(!visited[nbr.first]){
                topoSortDFS(nbr.first,visited,ans);
            }
        }
        ans.push(src);
    }

    void shortestPathDfs(int dest,stack<int>&topoOrder,int n){
        vector<int>dist(n,INT_MAX);
        int src=topoOrder.top();
        topoOrder.pop();
        dist[src]=0;
        for(auto nbr:adjList[0]){
            if(dist[0]+nbr.second < dist[nbr.first]){
                dist[nbr.first]=dist[0]+nbr.second;
            }
        }
        while(!topoOrder.empty()){
            int topElem=topoOrder.top();
            topoOrder.pop();
            if(!dist[topElem]!=INT_MAX){
                for(auto nbr:adjList[topElem]){
                    if(dist[topElem]+nbr.second < dist[nbr.first]){
                        dist[nbr.first]=dist[topElem]+nbr.second;
                    }
                }
            }
        }
        cout<<"Printing ans:"<<endl;
        for(int i=0;i<n;i++){
            cout<<i<<" -> "<<dist[i]<<endl;
        }
    }

};
int main(){
    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,1,2,1);
    g.addEdge(1,3,3,1);
    g.addEdge(2,3,5,1);
    g.addEdge(2,4,6,1);
    g.addEdge(4,3,1,1);
    g.printAdjList();
    
    int src=0;
    int dest=3;
    unordered_map<int,bool>visited;
    stack<int>ans;
    g.topoSortDFS(src,visited,ans);
    
    // while(!ans.empty()){
    //     cout<<ans.top()<<" ";
    //     ans.pop();
    // }

    int n=ans.size();
    g.shortestPathDfs(dest,ans,n);
    
}