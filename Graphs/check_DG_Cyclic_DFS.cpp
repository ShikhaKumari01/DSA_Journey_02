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
    bool checkDirectedGraphCyclicUsingDFS(int src,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsVisited){
        visited[src]=true;
        dfsVisited[src]=true;
        for(auto nbr:adjList[src]){
            if(!visited[nbr]){
                bool aageKaAns=checkDirectedGraphCyclicUsingDFS(nbr,visited,dfsVisited);
                if(aageKaAns==true){
                    return true;
                }
            }
            if(visited[nbr]==true&&dfsVisited[nbr]==true){
                return true;
            }
        }
        dfsVisited[src]=false;
        return false;
    }
    
};
int main(){
    Graph<int> g;
    int n=5;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);
    g.addEdge(4,0,1);
    bool ans=false;
    unordered_map<int,bool>visited;
    unordered_map<int,bool>dfsVisited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans=g.checkDirectedGraphCyclicUsingDFS(i,visited,dfsVisited);
            if(ans==true) 
                break;
        }
    }
    if(ans==true){
        cout<<"Cycle Present"<<endl;
    }
    else{
        cout<<"Cycle Absent"<<endl;
    }
}