#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    cout<<"Size: "<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl<<"Size: "<<pq.size()<<endl;
}