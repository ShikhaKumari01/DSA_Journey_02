//MAX HEAP

// #include<iostream>
// #include<queue>
// using namespace std;
// int kthSmallest(int arr[],int n,int k){
//     priority_queue<int>pq;
//     for(int i=0;i<k;i++){
//         pq.push(arr[i]);
//     }
//     for(int i=k;i<n;i++){
//         int element=arr[i];
//         if(element<pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     return pq.top();
// }
// int main(){
//     int arr[]={10,8,70,90,4,60,1};
//     int n=7;
//     int k=1;
//     cout<<k<<"th smallest element: "<<kthSmallest(arr,n,k);
// }


//MIN HEAP

// #include<iostream>
// #include<queue>
// using namespace std;
// int kthSmallest(int arr[],int n,int k){
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//     }
//     while(k>1){
//         pq.pop();
//         k--;
//     }
//     return pq.top();
    
// }
// int main(){
//     int arr[]={10,8,70,90,4,60,1};
//     int n=7;
//     int k=6;
//     cout<<k<<"th smallest element: "<<kthSmallest(arr,n,k);   
// }


//MAX HEAP

#include<iostream>
#include<queue>
using namespace std;
int kthSmallest(int arr[],int n,int k){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(pq.top()>arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main(){
    int arr[]={10,8,70,90,4,60,1};
    int n=7;
    int k=6;
    cout<<k<<"th smallest element: "<<kthSmallest(arr,n,k);
}