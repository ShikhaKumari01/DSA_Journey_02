#include<iostream>
using namespace std;
int main(){
    int arr[]={19,8,7,6,45,4,3,2};
    int n=8;
    
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    cout<<"Printing Sorted array using Insertion Sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}