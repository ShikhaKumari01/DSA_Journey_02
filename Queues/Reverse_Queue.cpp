// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reverseQueue(queue<int>&q){
//     stack<int>s;
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(2);
//     q.push(8);
//     reverseQueue(q);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }



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
// int main(){
//     queue<int>q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(2);
//     q.push(8);
//     reverseQueue(q);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }

// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void reverseQueue(queue<int>&q){
//     stack<int>s;
//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         s.push(temp);
//     }
//     while(!s.empty()){
//         int temp=s.top();
//         s.pop();
//         q.push(temp);
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     reverseQueue(q);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }


#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int>&q){
    stack<int>s;
    if(q.empty()) return;
    int temp=q.front();
    q.pop();
    reverseQueue(q);
    q.push(temp);
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}