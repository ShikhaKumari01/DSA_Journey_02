#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int target,int s,int e){
    int mid;
    int ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;

}
int lastOcc(int arr[],int n,int target,int s,int e){
    int mid;
    int ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;

}
int main(){
    int arr[]={1,3,4,4,4,4,4,6,6,9};
    int n=10;
    int key=9;
    int s=0;
    int e=n-1;
    cout<<"Total no. of occurrence: "<<lastOcc(arr,n,key,s,e)-firstOcc(arr,n,key,s,e)+1;
}