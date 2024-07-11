// #include<iostream>
// using namespace std;
// void reverseCount(int n){
//     if(n==0){
//         return ;
//     }
//     reverseCount(n-1);
//     cout<<n<<" ";
    
// }
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     reverseCount(n);
// }


#include<iostream>
using namespace std;
void count(int n){
    if(n==0) return;
    count(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    count(n);
}