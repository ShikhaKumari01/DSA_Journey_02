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

    void shortestDistDijkshtra(int src,int n){
        vector<int>dist(n,INT_MAX);
        set<pair<int,int>>st;
        dist[src]=0;
        st.insert(make_pair(0,src));
        while(!st.empty()){
            auto topElem=*(st.begin());
            int nodeDist=topElem.first;
            int node=topElem.second;
            st.erase(st.begin());
            for(auto nbr:adjList[node]){
                if(nodeDist+nbr.second<dist[nbr.first]){
                    auto result=st.find(make_pair(dist[nbr.first],nbr.first));
                    if(result!=st.end()){
                        st.erase(result);
                    }
                    dist[nbr.first]=nodeDist+nbr.second;
                    st.insert(make_pair(dist[nbr.first],nbr.first));
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
    // g.addEdge(6,3,2,1);
    // g.addEdge(6,1,14,1);
    // g.addEdge(3,1,9,1);
    // g.addEdge(3,2,10,1);
    // g.addEdge(1,2,7,1);
    // g.addEdge(2,4,15,1);
    // g.addEdge(4,3,11,1);
    // g.addEdge(6,5,9,1);
    // g.addEdge(4,5,6,1);

    // g.addEdge(0,1,5,0);
    // g.addEdge(0,2,6,0);
    // g.addEdge(2,1,-3,0);

    g.addEdge(0,1,2,0);
    g.addEdge(1,2,3,0);
    g.addEdge(2,1,4,0);
    g.printAdjList();
    
    g.shortestDistDijkshtra(0,3);
    
}