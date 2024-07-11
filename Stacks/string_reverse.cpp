// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string str="Shikha Das";
//     stack<char>s;
//     char ch;
//     for(int i=0;i<str.size();i++){
//         ch=str[i];
//         s.push(ch);
//     }
//     while(!s.empty()){
//         cout<<s.top();
//         s.pop();
//     }
// }


#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Shikha Das";
    stack<char>s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}