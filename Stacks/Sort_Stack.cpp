#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    insertSorted(s,target);
    s.push(temp);
}
void sortedStack(stack<int>&s){
    if(s.empty()) return;
    int temp=s.top();
    s.pop();
    sortedStack(s);
    insertSorted(s,temp);
}
int main(){
    stack<int>s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
    sortedStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}