#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>arr={4,3,2,6};
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
    }
    int cost=0;
    while(pq.size()!=1){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        int tempCost=first+second;
        cost+=tempCost;
        pq.push(tempCost);
    }
    cout<<cost;
}