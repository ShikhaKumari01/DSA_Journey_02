#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void solve(vector<int>&arr,int i,int &maxi,int ans){
    int n=arr.size();
    if(i>=n){
        maxi=max(ans,maxi);
        return;
    }
    solve(arr,i+2,maxi,ans+arr[i]);
    solve(arr,i+1,maxi,ans);
}
int main(){
    vector<int>arr{10,30,40,60};
    int maxi=INT_MIN;
    int ans=0;
    int i=0;
    solve(arr,i,maxi,ans);
    cout<<maxi;
}