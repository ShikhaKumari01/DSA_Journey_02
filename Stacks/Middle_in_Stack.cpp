// #include<iostream>
// #include<stack>
// using namespace std;
// int findMiddle(stack<int>&s,int i){
//     int n=s.size();
//     if(i==(n/2)+1){
//         return s.top();
//     }
//     int temp=s.top();
//     s.pop();
//     findMiddle(s,i+1);
// }
// int main(){
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(70);
//     int i=0;
//     cout<<findMiddle(s,i);
// }


// #include<iostream>
// #include<stack>
// using namespace std;
// void findMiddle(stack<int>&s,int i){
//     int n=s.size();
//     if(i==(n/2)+1){
//         cout<<s.top();
//     }
//     int temp=s.top();
//     s.pop();
//     findMiddle(s,i+1);
//     s.push(temp);
// }
// int main(){
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(70);
//     int i=0;
//     findMiddle(s,i);
    
// }


// #include<iostream>
// #include<stack>
// using namespace std;
// void findMiddle(stack<int>&s,int totalSize){
//     int n=s.size();
//     if(n==(totalSize/2)+1){
//         cout<<"Middle element is: "<<s.top();
//         return;
//     }
//     int temp=s.top();
//     s.pop();
//     findMiddle(s,totalSize);
//     s.push(temp);
// }
// void print(stack<int>&s){
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }
// int main(){
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     if(s.size()==0){
//         cout<<"Stack is empty";
//     }
//     int totalSize=s.size();
//     findMiddle(s,totalSize);
//     // while(!s.empty()){
//     //     cout<<s.top()<<" ";
//     //     s.pop();
//     // }
//     cout<<endl;
//     print(s);
// }



#include<iostream>
#include<stack>
using namespace std;
void findMiddle(stack<int>&s,int totalSize){
    int n=s.size();
    if(n==(totalSize/2)+1){
        cout<<"Middle element: "<<s.top();
        return;
    }
    int temp=s.top();
    s.pop();
    findMiddle(s,totalSize);
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int n=s.size();
    findMiddle(s,n);
}