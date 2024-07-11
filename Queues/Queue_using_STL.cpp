// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<"Size: "<<q.size()<<endl;
//     q.pop();
//     q.pop();
//     cout<<"Size: "<<q.size()<<endl;
//     if(q.empty()){
//         cout<<"Queue is empty"<<endl;
//     }
//     else{
//         cout<<"Queue is not empty"<<endl;
//     }
//     cout<<"Front element :"<<q.front()<<endl;
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }



#include<iostream>
#include<queue>
using namespace std;
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
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    q.pop();
    q.pop();
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
       cout<<"Queue is not empty"<<endl; 
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Front element: "<<q.front()<<endl;
}