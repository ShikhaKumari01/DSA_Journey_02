// #include<iostream>
// #include<vector>
// using namespace std;
// int solveUsingRec(int weight[],int value[],int i, int capacity){
//     if(i==0){
//         if(weight[0]<=capacity){
//             return value[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     int include=0;
//     if(weight[i]<=capacity)
//          include=solveUsingRec(weight,value,i-1,capacity-weight[i])+value[i];
//     int exclude=solveUsingRec(weight,value,i-1,capacity)+0;
//     int ans=max(include,exclude);
//     return ans;
// }
// int solveUsingTopDown(int weight[],int value[],int i, int capacity,vector<vector<int> >&dp){
//     if(i==0){
//         if(weight[0]<=capacity){
//             return value[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     if(dp[i][capacity]!=-1){
//         return dp[i][capacity];
//     }
//     int include=0;
//     if(weight[i]<=capacity)
//          include=solveUsingTopDown(weight,value,i-1,capacity-weight[i],dp)+value[i];
//     int exclude=solveUsingTopDown(weight,value,i-1,capacity,dp)+0;
//     dp[i][capacity]=max(include,exclude);
//     return dp[i][capacity];
// }
// int main(){
//     int n=3;
//     int weight[]={4,5,1};
//     int value[]={1,2,3};
//     int capacity=4;
//     // int ans=solveUsingRec(weight,value,n-1,capacity);

//     vector<vector<int> >dp(n,vector<int>(capacity+1,-1));
//     int ans=solveUsingTopDown(weight,value,n-1,capacity,dp);
//     cout<<"Answer: "<<ans<<endl;
// }


#include<iostream>
#include<vector>
using namespace std;
int solveUsingRec(int weight[],int value[],int i,int capacity){
    if(i==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    int include=0;
    if(capacity-weight[i]>=0)
    include=value[i] + solveUsingRec(weight,value,i-1,capacity-weight[i]);
    int exclude=solveUsingRec(weight,value,i-1,capacity);
    int ans=max(include,exclude);
    return ans;
}
int solveUsingTopDown(int weight[],int value[],int i,int capacity,vector<vector<int>>&dp){
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
    if(capacity-weight[i]>=0)
    include=value[i] + solveUsingTopDown(weight,value,i-1,capacity-weight[i],dp);
    int exclude=solveUsingTopDown(weight,value,i-1,capacity,dp);
    dp[i][capacity]=max(include,exclude);
    return dp[i][capacity];
}
int solveUsingBottomUp(int weight[],int value[],int n,int capacity){
    vector<vector<int>>dp(n,vector<int>(capacity+1,0));
    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            dp[0][w]=value[0];
        }
        else{
            dp[0][w]=0;
        }
    }
    for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
            int include=0;
            if(wt-weight[index]>=0)
            include=value[index] + dp[index-1][wt-weight[index]];
            int exclude=dp[index-1][wt];
            dp[index][wt]=max(include,exclude);
        }
    }
    return dp[n-1][capacity];


}
int solveUsingSpaceOpt(int weight[],int value[],int n,int capacity){
    vector<int>prev(capacity+1,0);
    vector<int>curr(capacity+1,0);
    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            prev[w]=value[0];
        }
        else{
            prev[w]=0;
        }
    }
    for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
            int include=0;
            if(wt-weight[index]>=0)
            include=value[index] + prev[wt-weight[index]];
            int exclude=prev[wt];
            curr[wt]=max(include,exclude);
            
        }
        //yahan mai glti karungi
        prev=curr;
    }
    return prev[capacity];


}
int solveUsingSpaceOpt2(int weight[],int value[],int n,int capacity){
    vector<int>curr(capacity+1,0);
    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            curr[w]=value[0];
        }
        else{
            curr[w]=0;
        }
    }
    for(int index=1;index<n;index++){
        for(int wt=capacity;wt>=0;wt--){
            int include=0;
            if(wt-weight[index]>=0)
            include=value[index] + curr[wt-weight[index]];
            int exclude=curr[wt];
            curr[wt]=max(include,exclude);
            
        }
    }
    return curr[capacity];


}
int main(){
    // int weight[]={4,5,1};
    // int value[]={1,2,3};
    // int n=3;
    // int capacity=4;
    // int ans=solveUsingRec(weight,value,n-1,capacity);
    // cout<<"Answer:"<<ans;

    // int weight[]={4,5,1};
    // int value[]={1,2,3};
    // int n=3;
    // int capacity=4;
    // vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    // int ans=solveUsingTopDown(weight,value,n-1,capacity,dp);
    // cout<<"Answer:"<<ans;

    // int weight[]={4,5,1};
    // int value[]={1,2,3};
    // int n=3;
    // int capacity=4;
    // int ans=solveUsingBottomUp(weight,value,n,capacity);
    // cout<<"Answer:"<<ans;

    // int weight[]={4,5,1};
    // int value[]={1,2,3};
    // int n=3;
    // int capacity=4;
    // int ans=solveUsingSpaceOpt(weight,value,n,capacity);
    // cout<<"Answer:"<<ans;

    int weight[]={4,5,1};
    int value[]={1,2,3};
    int n=3;
    int capacity=4;
    int ans=solveUsingSpaceOpt2(weight,value,n,capacity);
    cout<<"Answer:"<<ans;
}