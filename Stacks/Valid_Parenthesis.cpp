#include<iostream>
#include<stack>
using namespace std;
bool checkParenthesis(string &str,stack<char>&s){
    char ch;
    for(int i=0;i<str.length();i++){
        ch=str[i];
        if(s.empty()){
            if(ch=='('||ch=='{'||ch=='['){
                s.push(ch);
            }
            else{
                return false;
            }
        }
        else{
            if(ch=='('||ch=='{'||ch=='['){
                s.push(ch);
            }
            else if((s.top()=='('&&ch==')')||(s.top()=='{'&&ch=='}')||(s.top()=='['&&ch==']')){
                s.pop();
            }
            else{
                return false;
            }
        }
    } 
    if(s.empty()){
        return true;
    }
}
int main(){
    string str="}}}}}}";
    stack<char>s;
    bool flag=checkParenthesis(str,s);
    if(flag==true){
        cout<<"Valid Parenthesis"<<endl;
    }
    else{
        cout<<"Invalid Parenthesis"<<endl;
    }
}