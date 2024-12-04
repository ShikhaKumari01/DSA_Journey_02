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

    void bellManFordAlgo(int src,int n){
        vector<int>dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<n-1;i++){
            for(auto t:adjList){
                for(auto nbr:t.second){
                    int u=t.first;
                    int v=nbr.first;
                    int wt=nbr.second;
                    if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                        dist[v]=dist[u]+wt;
                    }
                }
            }
        }

        bool checkCycle=false;
        for(auto t:adjList){
                for(auto nbr:t.second){
                    int u=t.first;
                    int v=nbr.first;
                    int wt=nbr.second;
                    if(dist[u]!=INT_MAX && dist[u]+wt<dist[v]){
                        checkCycle=true;
                        break;
                    }
                }
            }
        if(checkCycle=true){
            cout<<"Cycle present"<<endl;
        }
        else{
            cout<<"Cycle absent"<<endl;
        }
        for(auto i:dist){
            cout<<i<<" ";
        }
    }
    

};
int main(){
    Graph g;
    g.addEdge(0,1,-1,0);
    g.addEdge(0,2,4,0);
    g.addEdge(1,2,3,0);
    g.addEdge(1,3,2,0);
    g.addEdge(1,4,2,0);
    g.addEdge(3,1,1,0);
    g.addEdge(3,2,5,0);
    g.addEdge(4,3,-3,0);
    g.printAdjList();
    
    g.bellManFordAlgo(0,5);
    
}

