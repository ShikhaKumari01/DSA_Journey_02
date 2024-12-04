// #include<iostream>
// #include<vector>
// using namespace std;
// int solveUsingRec(int n,int k){
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return k*k;
//     }
//     int ans=(solveUsingRec(n-1,k)+solveUsingRec(n-2,k))*(k-1);
//     return ans;
// }
// int topDownDp(int n,int k,vector<int>dp){
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return k*k;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     dp[n]=(topDownDp(n-1,k,dp)+topDownDp(n-2,k,dp))*(k-1);
//     return dp[n];
// }
// int bottomUp(int n,int k){
//     vector<int>dp(n+1,0);
//     dp[1]=k;
//     dp[2]=k*k;
//     for(int i=3;i<=n;i++){
//         dp[i]=(dp[i-1]+dp[i-2])*(k-1);
//     }
    
//     return dp[n];
// }
// int spaceOpt(int n,int k){
//     int prev2=k;
//     int prev1=k*k;
//     int curr;
//     for(int i=3;i<=n;i++){
//         curr=(prev1+prev2)*(k-1);
//         prev2=prev1;
//         prev1=curr;
//     }
    
//     return prev1;
// }
// int main(){
//     // int n=4;
//     // int k=3;
//     // int ans=solveUsingRec(n,k);
//     // cout<<"Answer: "<<ans<<endl;

//     // int n=4;
//     // int k=3;
//     // vector<int>dp(n+1,-1);
//     // int ans=topDownDp(n,k,dp);
//     // cout<<"Answer: "<<ans<<endl;

//     // int n=4;
//     // int k=3;
//     // int ans=bottomUp(n,k);
//     // cout<<"Answer: "<<ans<<endl;

//     int n=4;
//     int k=3;
//     int ans=spaceOpt(n,k);
//     cout<<"Answer: "<<ans<<endl;
// }


#include<iostream>
#include<vector>
using namespace std;
int solveUsingRec(int n,int k){
    if(n==1) return k;
    if(n==2) return k*k;
    int ans=(solveUsingRec(n-1,k)+solveUsingRec(n-2,k))*(k-1);
    return ans;
}
int solveUsingTopDown(int n,int k,vector<int>&dp){
    if(n==1) return k;
    if(n==2) return k*k;
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=(solveUsingTopDown(n-1,k,dp)+solveUsingTopDown(n-2,k,dp))*(k-1);
    return dp[n];
}
int solveUsingBottomUp(int n,int k){
    vector<int>dp(n+1,-1);
    dp[1]=k;
    dp[2]=k*k;
    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);
    }
    return dp[n];
}
int solveUsingSpaceOpt(int n,int k){
    int prev2=k;
    int prev1=k*k;
    int curr=0;
    for(int i=3;i<=n;i++){
        curr=(prev1+prev2)*(k-1);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}
int main(){
    // int n=4;
    // int k=3;
    // int ans=solveUsingRec(n,k);
    // cout<<"Answer:"<<ans;

    // int n=4;
    // int k=3;
    // vector<int>dp(n+1,-1);
    // int ans=solveUsingTopDown(n,k,dp);
    // cout<<"Answer:"<<ans;

    // int n=4;
    // int k=3;
    // int ans=solveUsingBottomUp(n,k);
    // cout<<"Answer:"<<ans;

    int n=4;
    int k=3;
    int ans=solveUsingSpaceOpt(n,k);
    cout<<"Answer:"<<ans;
}