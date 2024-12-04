#include<iostream>
using namespace std;
int main(){
    int arr[]={19,8,7,6,45,4,3,2};
    int n=8;
    
    for(int i=0;i<=n-2;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    cout<<"Printing Sorted array using Selection Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}