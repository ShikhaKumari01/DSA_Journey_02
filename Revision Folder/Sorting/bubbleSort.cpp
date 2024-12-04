#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int round=1;round<=n-1;round++){
        for(int j=0;j<=n-1-round;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2};
    int n=8;
    bubbleSort(arr,n);
    cout<<"Printing Sorted array using Bubble Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}