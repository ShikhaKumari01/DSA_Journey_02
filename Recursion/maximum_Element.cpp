// #include<iostream>
// #include<limits.h>
// using namespace std;
// int maxElement(int arr[],int size,int i,int max){
//     if(i==size){
//         return max;
//     }
    
//     if(max<arr[i]){
//         max=arr[i];
//     }
//     maxElement(arr,size,++i,max);
// }
// int main(){
//     int arr[10]={1,2190,3,4,500,6,7,8,9,10};
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     int size=10;
//     int i=0;
//     int max=INT_MIN;
//     cout<<"Maximum number is: "<<maxElement(arr,size,i,max);
// }


// #include<iostream>
// #include<limits.h>
// using namespace std;
// void maxElement(int arr[],int size,int i,int& max){
//     if(i==size){
//         return;
//     }
    
//     if(max<arr[i]){
//         max=arr[i];
//     }
//     maxElement(arr,size,++i,max);
// }
// int main(){
//     int arr[10]={1,2190,3,4,500,6,7,8,9,10};
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     int size=10;
//     int i=0;
//     int max=INT_MIN;
//     maxElement(arr,size,i,max);
//     cout<<"Maximum number is: "<<max;
// }


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void printMax(vector<int>arr,int i,int maxi){
    int n=arr.size();
    if(i==n){
        cout<<maxi;
        return;
    }
    if(maxi<arr[i]){
        maxi=arr[i];
    }
    printMax(arr,i+1,maxi);
}
int main(){
    vector<int>arr={10,2000,30,40,50,60,444};
    int maxi=INT_MIN;
    int i=0;
    printMax(arr,i,maxi);
    
}