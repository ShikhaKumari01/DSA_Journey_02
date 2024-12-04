#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
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
    bool checkCyclicUsingBFS(int src,unordered_map<int,bool>&vis){
        queue<int>q;
        unordered_map<int,int>parent;
        q.push(src);
        vis[src]=true;
        parent[src]=-1;
        while(!q.empty()){
            int fNode=q.front();
            q.pop();
            for(auto nbr:adjList[fNode]){
                if(!vis[nbr]){
                    q.push(nbr);
                    vis[nbr]=true;
                    parent[nbr]=fNode;
                }
                //already visited
                if(vis[nbr]&&nbr!=parent[fNode]){
                    return true;
                }
            }
        }
        return false;
    }
    
};
int main(){
    Graph<int> g;
    int n=5;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    unordered_map<int,bool>vis;
    bool ans=false;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            ans=g.checkCyclicUsingBFS(i,vis);
            if(ans==true) break;
        }
    }
    if(ans==true){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is absent";
    }
}
