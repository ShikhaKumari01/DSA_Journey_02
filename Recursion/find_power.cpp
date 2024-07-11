// #include<iostream>
// using namespace std;
// int FindPower(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     int ans = a * FindPower(a,b-1);
//     return ans;

// }
// int main(){
//     int a,b;
//     cout<<"Enter a:";
//     cin>>a;
//     cout<<"Enter b:";
//     cin>>b;
//     cout<<"Answer:"<<FindPower(a,b);
// }

#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    int ans=a*pow(a,b-1);
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<a<<" raise to the power "<<b<<" is:"<<pow(a,b);
}