// #include<iostream>
// #include<limits.h>
// using namespace std;
// int minElement(int arr[],int size,int i,int min){
//     if(i==size){
//         return min;
//     }
    
//     if(min>arr[i]){
//         min=arr[i];
//     }
//     minElement(arr,size,++i,min);
// }
// int main(){
//     int arr[10]={1,-2190,3,4,500,6,-7,8,9,10};
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     int size=10;
//     int i=0;
//     int min=INT_MAX;
//     cout<<"Minimum number is: "<<minElement(arr,size,i,min);
// }


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void printMax(vector<int>arr,int i,int mini){
    int n=arr.size();
    if(i==n){
        cout<<mini;
        return;
    }
    if(mini>arr[i]){
        mini=arr[i];
    }
    printMax(arr,i+1,mini);
}
int main(){
    vector<int>arr={10,-2000,30,40,50,60,444};
    int mini=INT_MAX;
    int i=0;
    printMax(arr,i,mini);
    
}