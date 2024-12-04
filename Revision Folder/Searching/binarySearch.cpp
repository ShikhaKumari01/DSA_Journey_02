// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80,90,100};
//     int n=10;
//     if(binary_search(arr,arr+n,44)){
//         cout<<"Present";
//     }
//     else{
//         cout<<"Absent";
//     }
// }


// #include<iostream>
// using namespace std;
// bool binarySearch(int arr[],int n,int target,int s,int e){
//     int mid;
//     while(s<e){
//         mid=(s+e)/2;
//         if(arr[mid]==target){
//             return true;
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return false;

// }
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     int target=60;
//     int s=0;
//     int e=n-1;
//     bool ans=binarySearch(arr,n,target,s,e);
//     if(ans){
//         cout<<"Present";
//     }
//     else{
//         cout<<"Absent";
//     }
// }


#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n,int target,int s,int e){
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return false;
}
int main(){
    int arr[]={1,4,5,6,7,9,10,11,12,15};
    int n=10;
    int target;
    cout<<"Enter any number to search: "<<endl;
    cin>>target;
    int s=0;
    int e=n-1;
    if(binarySearch(arr,n,target,s,e)){
        cout<<"Target present"<<endl;
    }
    else{
        cout<<"Target absent"<<endl;
    }
}