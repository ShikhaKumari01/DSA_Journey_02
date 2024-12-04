// #include<iostream>
// using namespace std;
// void merge(int arr[],int s,int e){
//     int mid=(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *left=new int[len1];
//     int *right=new int[len2];
//     int k=s;
//     for(int i=0;i<len1;i++){
//         left[i]=arr[k];
//         k++;
//     }
//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         right[i]=arr[k];
//         k++;
//     }
//     int leftIndex=0;
//     int rightIndex=0;
//     int mainIndex=s;
//     while(leftIndex<len1&&rightIndex<len2){
//         if(left[leftIndex]<right[rightIndex]){
//             arr[mainIndex]=left[leftIndex];
//             mainIndex++;
//             leftIndex++;
//         }
//         else if(left[leftIndex]>right[rightIndex]){
//             arr[mainIndex]=right[rightIndex];
//             mainIndex++;
//             rightIndex++;
//         }
//     }
//     while(leftIndex<len1){
//         arr[mainIndex]=left[leftIndex];
//         mainIndex++;
//         leftIndex++;
//     }
//     while(rightIndex<len2){
//         arr[mainIndex]=right[rightIndex];
//         mainIndex++;
//         rightIndex++;
//     }
// }
// void splitArray(int arr[],int n,int s,int e){
//     if(s==e) return;
//     int mid=(s+e)/2;
//     splitArray(arr,n,s,mid);
//     splitArray(arr,n,mid+1,e);
//     merge(arr,s,e);
// }
// int main(){
//     int arr[]={19,8,7,6,45,4,3,2};
//     int n=8;
//     int s=0;
//     int e=n-1;
//     splitArray(arr,n,s,e);
//     cout<<"Printing Sorted array using Merge Sort:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *left=new int[len1];
    int *right=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }
    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=s;
    while(leftIndex<len1&&rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainIndex]=left[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        else if(left[leftIndex]>right[rightIndex]){
            arr[mainIndex]=right[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }
    while(leftIndex<len1){
        arr[mainIndex]=left[leftIndex];
        leftIndex++;
        mainIndex++;
    }
    while(rightIndex<len2){
        arr[mainIndex]=right[rightIndex];
        mainIndex++;
        rightIndex++;
    }
}
void splitArray(int arr[],int s,int e){
    if(s==e) return;
    int mid=(s+e)/2;
    splitArray(arr,s,mid);
    splitArray(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[]={5,7,1,4,6,8};
    int n=6;
    int s=0;
    int e=n-1;
    splitArray(arr,s,e);
    cout<<"Printing sorted array using Merge Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}