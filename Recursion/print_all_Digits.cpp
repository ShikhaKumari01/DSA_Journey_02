// #include<iostream>
// using namespace std;
// void printDigits(int n){
//     if(n==0){
//         return;
//     }
//     int digit=n;
//     digit=n%10;
    
//     n=n/10;
//     printDigits(n);
//     cout<<digit<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     printDigits(n);
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=0647;
//     cout<<n;
// }


#include<iostream>
using namespace std;
void printDigits(int n){
    if(n==0){
        return;
    }
    int digit=n;
    digit=digit%10;
    n=n/10;
     printDigits(n);
    cout<<digit<<" ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printDigits(n);
}