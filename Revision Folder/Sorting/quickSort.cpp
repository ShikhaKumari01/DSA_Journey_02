// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int pivotIndex=s;
//     int pivotElem=arr[s];
//     int count=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivotElem){
//             count++;
//         }
//     }
//     swap(arr[s+count],arr[pivotIndex]);
//     pivotIndex=s+count;
//     int i=s;
//     int j=e;
//     while(i<pivotIndex&&j>pivotIndex){
//         while(arr[i]<arr[pivotIndex]){
//             i++;
//         }
//         while(arr[j]>arr[pivotIndex]){
//             j--;
//         }
//         if(i<pivotIndex&&j>pivotIndex){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[],int s,int e){
//     if(s>=e) return;
//     int p=partition(arr,s,e);
//     quickSort(arr,s,p-1);
//     quickSort(arr,p+1,e);
// }
// int main(){
//     int arr[]={5,7,1,4,6,8};
//     int n=6;
//     int s=0;
//     int e=n-1;
//     quickSort(arr,s,e);
//     cout<<"Printing sorted array using Quick Sort: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivotIndex=s;
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<arr[pivotIndex]){
            count++;
        }
    }
    swap(arr[pivotIndex],arr[s+count]);
    pivotIndex=s+count;
    while(s<pivotIndex && e>pivotIndex){
        if(arr[s]<arr[pivotIndex]){
            s++;
        }
        if(arr[e]>arr[pivotIndex]){
            e--;
        }
        if(arr[s]>arr[pivotIndex]&&arr[e]<arr[pivotIndex]){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e) return;
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[]={3,5,67,89,3,3};
    int n=6;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(auto a:arr){
        cout<<a<<" ";
    }
}