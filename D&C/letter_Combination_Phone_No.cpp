#include<iostream>
#include<vector>
using namespace std;
void letterCombo(vector<string>&ans,string output,int index,string digits,vector<string>&mapping){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    int splitDigit=digits[index]-'0';
    string value=mapping[splitDigit];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        letterCombo(ans,output,index+1,digits,mapping);
        output.pop_back();
    }

}
int main(){
    string digits="42";
    int index=0;
    vector<string>ans;
    string output="";
    vector<string>mapping(10);
    if(digits.length()==0){
        cout<<"There is no digit";
        return 0;
    }
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    letterCombo(ans,output,index,digits,mapping);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}