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
    unordered_map<int,list<pair<int,int>>>adjList;

    void addEdge(int u,int v,int w,bool direction){
        adjList[u].push_back({v,w});
        if(direction==1){
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

    void floydWarshallAlgo(int n){
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        for(int i=0;i<n;i++){
            dist[i][i]=0;
        }
        for(auto t:adjList){
            for(auto nbr:t.second){
                int u=t.first;
                int v=nbr.first;
                int wt=nbr.second;
                dist[u][v]=wt;
            }
        }
        for(int helper=0;helper<n;helper++){
            for(int src=0;src<n;src++){
                for(int dest=0;dest<n;dest++){
                    dist[src][dest]=min(dist[src][dest],dist[src][helper]+dist[helper][dest]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dist[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    

};
int main(){
    Graph g;
    g.addEdge(0,1,3,0);
    g.addEdge(0,3,5,0);
    g.addEdge(1,0,2,0);
    g.addEdge(1,3,4,0);
    g.addEdge(2,1,1,0);
    g.addEdge(3,2,2,0);
    g.printAdjList();
    
    g.floydWarshallAlgo(4);
    
}