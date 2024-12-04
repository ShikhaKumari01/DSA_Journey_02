#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
template<typename T >
class Graph{
    public:
    unordered_map<T,list<T>>adjList;
    void addEdge(T u,T v,bool direction){
        //direction=0 ----->undirected graph
        //direction=1 ----->directed graph
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }
    void printAdjacencyList(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
    void bfs(T src,unordered_map<int,bool>&vis){
        queue<T>q;
        
        q.push(src);
        vis[src]=true;
        while (!q.empty())
        {
            int fNode=q.front();
            q.pop();
            cout<<fNode<<" ";
            for(auto i:adjList[fNode]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
        
    }
    void dfs(T src,unordered_map<int,bool>&vis){
        cout<<src<<",";
        vis[src]=true;
        for(auto i:adjList[src]){
            if(!vis[i]){
                dfs(i,vis);
            }
        }
        
    }
    void topoSortDFS(int src,unordered_map<int,bool>&visited,stack<int>&ans){
        visited[src]=true;
        for(auto nbr:adjList[src]){
            if(!visited[nbr]){
                topoSortDFS(nbr,visited,ans);
            }
        }
        ans.push(src);
    }
    void topoSortBFS(int n,vector<int>&ans){
        queue<int>q;
        unordered_map<int,int>indegree;
        for(auto i:adjList){
            int src=i.first;
            for(auto nbr:i.second){
                indegree[nbr]++;
            }
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int fNode=q.front();
            q.pop();
            ans.push_back(fNode);
            for(auto nbr:adjList[fNode]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
    }
};
int main(){
    Graph<int> g;
    int n=8;
    g.addEdge(2,4,1);
    g.addEdge(2,5,1);
    g.addEdge(4,6,1);
    g.addEdge(5,3,1);
    g.addEdge(3,7,1);
    g.addEdge(6,7,1);
    g.addEdge(7,0,1);
    g.addEdge(7,1,1);
    // int src=0;
    // unordered_map<int,bool>visited;
    // stack<int>ans;
    // for(int i=0;i<n;i++){
    //     if(!visited[i]){
    //         g.topoSortDFS(src,visited,ans);
    //     }
    // }
    // while(!ans.empty()){
    //     cout<<ans.top()<<" ";
    //     ans.pop();
    // }
    vector<int>ans;
    g.topoSortBFS(n,ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}