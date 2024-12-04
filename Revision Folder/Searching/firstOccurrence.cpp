// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,4,4,4,4,4,6,6,9};
//     int n=10;
//     int key=6;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             cout<<"First occurrence of "<<key<<" is: "<<i<<" index";
//             break;
//         }
//     }
// }



#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target,int s,int e){
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
int main(){
    int arr[]={1,3,4,4,4,4,4,6,6,9};
    int n=10;
    int key=4;
    int s=0;
    int e=n-1;
    cout<<"First occurrence of "<<key<<" is: "<<binarySearch(arr,n,key,s,e)<<" index";
}