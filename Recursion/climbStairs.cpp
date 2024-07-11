// #include<iostream>
// using namespace std;
// int climbStairs(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     return climbStairs(n-1)+climbStairs(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin>>n;
//     cout<<"Total no. of ways to reach nth stairs:"<<climbStairs(n);
//


#include<iostream>
using namespace std;
int climbStairs(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int ans=climbStairs(n-1)+climbStairs(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter number of stairs: ";
    cin>>n;
    cout<<"Number of ways: "<<climbStairs(n);
}