#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int s,int e){
    int mid;
    int ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==mid+1){
            s=mid+1;
        }
        
        if(arr[mid]>mid+1){
            ans=mid+1;
            e=mid-1;
        }
        else if(s==e){
            ans=mid+1;
        }
        else{
            ans=mid+1;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,10};
    int n=9;
    int s=0;
    int e=n-1;
    int ans=binarySearch(arr,n,s,e);
    if(ans==-1){
        cout<<"No result found";
    }
    else{
        cout<<"Missing elem: "<<ans;
    }
}