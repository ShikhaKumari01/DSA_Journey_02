#include<iostream>
#include<vector>
using namespace std;
int solveUsingRec(int weight[],int value[],int i, int capacity){
    if(i==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    int include=0;
    if(weight[i]<=capacity)
         include=solveUsingRec(weight,value,i-1,capacity-weight[i])+value[i];
    int exclude=solveUsingRec(weight,value,i-1,capacity)+0;
    int ans=max(include,exclude);
    return ans;
}
int solveUsingTopDown(int weight[],int value[],int i, int capacity,vector<vector<int> >&dp){
    if(i==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    if(dp[i][capacity]!=-1){
        return dp[i][capacity];
    }
    int include=0;
    if(weight[i]<=capacity)
         include=solveUsingTopDown(weight,value,i-1,capacity-weight[i],dp)+value[i];
    int exclude=solveUsingTopDown(weight,value,i-1,capacity,dp)+0;
    dp[i][capacity]=max(include,exclude);
    return dp[i][capacity];
}
int main(){
    int n=3;
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int capacity=4;
    // int ans=solveUsingRec(weight,value,n-1,capacity);

    vector<vector<int> >dp(n,vector<int>(capacity+1,-1));
    int ans=solveUsingTopDown(weight,value,n-1,capacity,dp);
    cout<<"Answer: "<<ans<<endl;
}