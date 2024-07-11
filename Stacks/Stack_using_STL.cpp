// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     st.pop();
//     // while(!st.empty()){
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }
//     cout<<"Size of stack: "<<st.size()<<endl;
//     cout<<"Element on top: "<<st.top()<<endl;
//     cout<<"Is empty? "<<st.empty()<<endl;
// }



#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    cout<<"Element on top:"<<s.top()<<endl;
    cout<<"Size:"<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}