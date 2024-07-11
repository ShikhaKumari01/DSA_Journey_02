// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
    
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin>>n;
//     int ans=fact(n);
//     cout<<"Answer:"<<ans;
// }

#include<iostream>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    int ans=n*fact(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"!: "<<fact(n);
}