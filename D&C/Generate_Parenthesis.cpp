#include<iostream>
#include<vector>
using namespace std;
void generateParenthesis(int open,int close,int n,vector<string>&ans,string output){
    if(open==0&&close==0){
        ans.push_back(output);
        return;
    }
    if(open>0){
        output.push_back('(');
        generateParenthesis(open-1,close,n,ans,output);
        output.pop_back();
    }
    if(close>open){
        output.push_back(')');
        generateParenthesis(open,close-1,n,ans,output);
        output.pop_back();
    }
}
int main(){
    int n;
    cout<<"Enter no. of parenthesis:";
    cin>>n;
    int open=n;
    int close=n;
    vector<string>ans;
    string output="";
    generateParenthesis(open,close,n,ans,output);
    cout<<"All possible combinations of parenthesis:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}