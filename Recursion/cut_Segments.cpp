// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// int solve(vector<int>arr,int target){
//    int n=arr.size();
//    if(target==0){
//     return 0;
//    }
//    if(target<0){
//     return INT_MAX;
//    }
//    int mini=INT_MAX;
//    for(int i=0;i<n;i++){
//     int ans=solve(arr,target-arr[i]);
//     if(ans!=INT_MAX){
//         mini=min(mini,ans+1);
//     }
//    }
//    return mini;
// }
// int main(){
//     vector<int>arr={1,2,3};
//     int target=7;
//     cout<<solve(arr,target);
// }


// #include<iostream>
// #include<limits.h>
// #include<algorithm>
// using namespace std;
// int solve(int n,int x,int y,int z){
//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return INT_MIN;
//     }
//     int ans1=solve(n-x,x,y,z) +1;
//     int ans2=solve(n-y,x,y,z) +1;
//     int ans3=solve(n-z,x,y,z) +1;
//     int ans=max(ans1, max(ans2, ans3));
//     return ans;

// }
// using namespace std;
// int main(){
//     int n=7;
//     int x=5;
//     int y=2;
//     int z=2;
//     int ans=solve(n,x,y,z);
//     if(ans<0){
//         return 0;
//     }
//     cout<<"Maximum no. of segments: "<<ans;
// }


#include<iostream>
#include<limits.h>
using namespace std;
int solve(int n,int x,int y,int z){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    int a=solve(n-x,x,y,z)+1;
    int b=solve(n-y,x,y,z)+1;
    int c=solve(n-z,x,y,z)+1;
    int ans=max(a,max(b,c));
    return ans;
}
int main(){
    int n=9;
    int x=2;
    int y=5;
    int z=3;
    int ans=solve(n,x,y,z);
    if(ans<0) ans=0;
    cout<<"Answer: "<<ans;
}