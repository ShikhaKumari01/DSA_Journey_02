// #include<iostream>
// using namespace std;
// void reverseCount(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<" ";
//     reverseCount(n-1);
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
    cout<<n<<" ";
    count(n-1);
    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    count(n);
}