#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,-3,4,-5,6};
    int n=arr.size();
    // int i=0;
    // int j=0;
    // while(j<n){
    //     if(arr[j]>=0){
    //         j++;
    //     }
    //     else{
    //         swap(arr[i],arr[j]);
    //         i++;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    //Dutch National Flag
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]<0) l++;
        else if(arr[h]>0) h--;
        else swap(arr[l],arr[h]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}