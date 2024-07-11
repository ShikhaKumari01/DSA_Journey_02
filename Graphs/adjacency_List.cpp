// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;
// class Graph{
//     public:
//     unordered_map<int,list<int>>adjList;
//     void addEdge(int u,int v,bool direction){
//         //direction=0 ----->undirected graph
//         //direction=1 ----->directed graph
//         adjList[u].push_back(v);
//         if(direction==0){
//             adjList[v].push_back(u);
//         }
//     }
//     void printAdjacencyList(){
//         for(auto i:adjList){
//             cout<<i.first<<"->";
//             for(auto j:i.second){
//                 cout<<j<<",";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     Graph g;
//     // g.addEdge(0,1,0);
//     // g.addEdge(0,2,0);
//     // g.addEdge(2,1,0);

//     g.addEdge(0,1,1);
//     g.addEdge(0,2,1);
//     g.addEdge(1,2,1);
//     g.printAdjacencyList();

// }


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
};
int main(){
    Graph<int> g;
    // g.addEdge(0,1,0);
    // g.addEdge(0,2,0);
    // g.addEdge(2,1,0);

    g.addEdge(0,1,0);
    g.addEdge(1,3,0);
    g.addEdge(0,2,0);
    g.addEdge(2,4,0);
    g.printAdjacencyList();
    cout<<endl;
    // g.bfs(0);
    unordered_map<int,bool>vis;
    // cout<<"Printing BFS:";
    // for(int i=0;i<=4;i++){
    //     if(!vis[i]){
    //         g.bfs(i,vis);
    //     }
    // }

    cout<<"Printing DFS:";
    for(int i=0;i<=4;i++){
        if(!vis[i]){
            g.dfs(i,vis);
        }
    }

}


// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;
// class Graph{
//     public:
//     unordered_map<int,list<pair<int,int>>>adjList;
//     void addEdge(int u,int v,int weight,bool direction){
//         //direction=0 ----->undirected graph
//         //direction=1 ----->directed graph
//         adjList[u].push_back({v,weight});
//         if(direction==0){
//             adjList[v].push_back({u,weight});
//         }
//     }
//     void printAdjacencyList(){
//         for(auto i:adjList){
//             cout<<i.first<<"->";
//             for(auto j:i.second){
//                 cout<<"("<<j.first<<","<<j.second<<")";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main(){
//     Graph g;
//     // g.addEdge(0,1,0);
//     // g.addEdge(0,2,0);
//     // g.addEdge(2,1,0);

//     g.addEdge(0,1,3,1);
//     g.addEdge(0,3,8,1);
//     g.addEdge(3,1,6,1);
//     g.addEdge(1,2,5,1);
//     g.printAdjacencyList();

// }