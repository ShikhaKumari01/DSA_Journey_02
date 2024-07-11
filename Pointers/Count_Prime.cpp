//------------------NAIVE APPROACH
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int countPrime(int n){
//     int count=0;
//     for(int i=2;i<=n;i++){
//         if(isPrime(i)) count++;
//     }
//     return count;
// }
// int main(){
//     int n=17;
//     if(n==1){
//         cout<<"Neither prime nor composite"<<endl;
//         return 0;
//     }
//     cout<<"Total no of Primes: "<<countPrime(n);
// }



//------------------SQRT APPROACH
// #include<iostream>
// #include <cmath> 
// using namespace std;
// bool isPrime(int n){
//     if(n<=1) return false;
//     int sqrtN=sqrt(n);
//     for(int i=2;i<=sqrtN;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int countPrime(int n){
//     int count=0;
//     for(int i=2;i<=n;i++){
//         if(isPrime(i)) count++;
//     }
//     return count;
// }
// int main(){
//     int n=17;
//     cout<<"Total no of Primes: "<<countPrime(n);
// }



//------------------SIEVE OF ERATOSTHENES APPROACH
#include<iostream>
#include <cmath> 
#include<vector>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    int sqrtN=sqrt(n);
    for(int i=2;i<=sqrtN;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=17;
    vector<bool>arr(n,true);
    arr[0]=false;
    arr[1]=false;
    int ans=0;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            ++ans;
            for(int j=2*i;j<=n;j++){
                arr[j]=false;
            }
        }
    }
    cout<<"Total no. of Primes:"<<ans;
}