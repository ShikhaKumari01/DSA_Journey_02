// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     bool flag=false;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             flag=true;
//             return false;
//         }
        
//     }
//     if(flag==false){
//         return true;
//     }
// }
// int main(){
//     int n=10;
//     int count=0;
//     for(int i=2;i<=n;i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     cout<<count;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin>>n;
//     int count=0;
//     bool flag=false;
//     for(int i=2;i<=n;i++){
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 flag=true;
//                 break;
//             }
//      }
//      if(flag==false)  {
//             count++;
//         }
//     }
    
//     cout<<count;
// }

// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
        
//     }
//     return true;
// }
// int main(){
//     int n=17;
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     cout<<count;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// bool prime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
        
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin>>n;
//     vector<bool>arr(n,true);
//     if(n==0){
//         return 0;
//     }
//     int ans=0;
//     for(int i=2;i<n;i++){
//         if(prime(i)){
//             ans++;
//             for(int j=i+1;i<=n;i++){
//                 if(j%i==0){
//                     arr[j]=false;
//                 }
//             }
//         }
//     }
//   cout<<ans;
// }


