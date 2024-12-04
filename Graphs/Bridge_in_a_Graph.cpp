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
    void printAdjList(){
        for(auto i:adjList){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void findBridge(int src,int parent,int &timer,vector<int>&tin,vector<int>&low,unordered_map<int,bool>&visited){
        visited[src]=true;
        tin[src]=timer;
        low[src]=timer;
        timer++;
        for(auto nbr:adjList[src]){
            if(nbr==parent){
                continue;
            }
            if(!visited[nbr]){
                findBridge(nbr,src,timer,tin,low,visited);
                low[src]=min(low[src],low[nbr]);
                if(low[nbr]>low[src]){
                    cout<<src<<"---"<<nbr<<"is a bridge"<<endl;
                }
            }
            else{
                low[src]=min(low[src],low[nbr]);
            }
        }

    }
};
int main(){
    Graph g;
    g.addEdge(1,0,1);
    g.addEdge(0,3,1);
    g.addEdge(3,4,1);
    g.addEdge(1,2,1);
    g.addEdge(2,0,1);
    g.printAdjList();

    cout<<endl;
    int n=5;
    int src=0;
    int parent=-1;
    int timer=0;
    vector<int>tin(n);
    vector<int>low(n);
    unordered_map<int,bool>visited;
    g.findBridge(src,parent,timer,tin,low,visited);
}