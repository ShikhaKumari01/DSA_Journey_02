// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reverseQueue(queue<int>&q){
//     if(q.empty()) return;
//     int temp=q.front();
//     q.pop();
//     reverseQueue(q);
//     q.push(temp);
// }
// void revKElem(queue<int>&q,int k){
//     int n=q.size();
//     int count=0;
//     if()
// }
// int main(){
//     queue<int>q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(2);
//     q.push(8);
//     int k=3;
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }



#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseKElements(queue<int>&q,int k){
    stack<int>s;
    int count=0;
    int n=q.size();
    if(k<=0) return;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;
        if(count==k){
            break;
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    count=0;
    while(!q.empty()&&n-k>0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k){
            break;
        }
    }
}
int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    reverseKElements(q,3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}