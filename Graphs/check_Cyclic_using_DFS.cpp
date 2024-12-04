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
    bool checkCyclicUsingDFS(int src,unordered_map<int,bool>&vis,int parent){
        vis[src]=true;
        for(auto nbr:adjList[src]){
            if(!vis[nbr]){
                bool checkAageKaAns=checkCyclicUsingDFS(nbr,vis,src);
                if(checkAageKaAns==true){
                    return true;
                }
            }
            else if(vis[nbr]&&nbr!=parent){
                return true;
            }
        }
        return false;
    }
    
};
int main(){
    Graph<int> g;
    int n=6;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    g.addEdge(4,2,0);
    cout<<endl;
    unordered_map<int,bool>vis;
    bool ans=false;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            ans=g.checkCyclicUsingDFS(i,vis,-1);
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