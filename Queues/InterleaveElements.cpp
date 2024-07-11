#include<iostream>
#include<queue>
using namespace std;
void interleaveElem(queue<int>&q){
    int n=q.size();
    int count=0;
    queue<int>q2;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count==n/2) break;
    }
    while(!q.empty()&&!q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);
        int second=q.front();
        q.pop();
        q.push(second);
    }
    if(n&1){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    
    interleaveElem(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}