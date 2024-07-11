#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(60);
    dq.pop_back();
    dq.push_front(30);
    dq.pop_front();
    dq.push_front(40);
    dq.push_back(50);
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}