// #include<iostream>
// #include<stack>
// using namespace std;
// void insertAtBottom(stack<int>&s,int target){
//     int n=s.size();
//     if(n==0){
//         s.push(target);
//         return;
//     }
//     int temp=s.top();
//     s.pop();
//     insertAtBottom(s,target);
//     s.push(temp);
// }
// void reverse(stack<int>&s){
//     int n=s.size();
//     if(n==0){
//         return;
//     }
//     int target=s.top();
//     s.pop();
//     reverse(s);
//     insertAtBottom(s,target);
    
    
// }
// int main(){
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     reverse(s);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }


#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int &target){
    int n=s.size();
    if(n==0){
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,target);
    s.push(temp);
}
void reverseStack(stack<int>&s){
    int n=s.size();
    if(n==0){
        return;
    }
    int target=s.top();
    s.pop();
    reverseStack(s);
    
    insertAtBottom(s,target);
}
void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    reverseStack(s);
    print(s);
}