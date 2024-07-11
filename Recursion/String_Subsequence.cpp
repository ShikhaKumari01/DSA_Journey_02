// #include<iostream>
// using namespace std;
// void printSubsequence(string str,string output,int i){
//     if(i==str.length()){
//         cout<<"("<<output<<") ";
//         return;
//     }
//     //exclude
//     printSubsequence(str,output,i+1);
//     //include
//     // output.push_back(str[i]);
//     output=output+str[i];
//     printSubsequence(str,output,i+1);
// }
// int main(){
//     string str="abcd";
//     string output="";
//     int i=0;
//     printSubsequence(str,output,i);
// }


#include<iostream>
#include<vector>
using namespace std;
void printSubsequence(string str,vector<string>&ans,string output,int i){
    if(i==str.length()){
        ans.push_back(output);
        return;
    }
    //exclude
    printSubsequence(str,ans,output,i+1);
    //include
    printSubsequence(str,ans,output+str[i],i+1);
}
int main(){
    string str="abc";
    vector<string>ans;
    string output="";
    int i=0;
    printSubsequence(str,ans,output,i);
    for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<" ";
    }
       
}
