// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int>pq;
//     int arr1[]={10,20,30,40,50};
//     int arr2[]={3,7,9,12,45};
//     for(int i=0;i<5;i++){
//         pq.push(arr1[i]);
//     }
//     for(int i=0;i<5;i++){
//         pq.push(arr2[i]);
//     }
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }


#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    int arr1[]={10,30,40,20,90,60};
    int arr2[]={44,22,55,66};
    int n1=6;
    int n2=4;
    for(int i=0;i<n1;i++){
        pq.push(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        pq.push(arr2[i]);
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}