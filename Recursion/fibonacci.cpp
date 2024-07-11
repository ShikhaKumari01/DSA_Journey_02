// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter which term you want to find:"<<endl;
//     cin>>n;
//     cout<<"Answer:"<<fibonacci(n);
// }


#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    int ans=fibo(n-1)+fibo(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"th term: "<<fibo(n);
}