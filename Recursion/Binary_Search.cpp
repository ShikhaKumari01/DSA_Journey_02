// #include<iostream>
// using namespace std;
// void binarySearch(int arr[],int n,int s,int e,int target){
//     int mid;
//     while(s<=e){
//         mid=(s+e)/2;
//         if(arr[mid]==target){
//         cout<<"Present at: "<<mid<<"th index"<<endl;
//         return;
//     }
//     else if(arr[mid]>target){
//         e=mid-1;
//     }
//     else if (arr[mid]<target)
//     {
//         s=mid+1;
//     }

//     }
// }
// int main(){
//     int arr[7]={10,20,30,40,50,60,70};
//     int n=7;
//     int s=0;
//     int e=n-1;
//     int target=80;
//     binarySearch(arr,n,s,e,target);
// }


// #include<iostream>
// using namespace std;
// void binarySearch(int arr[],int &n,int &s,int &e,int &target){
//     int mid=(s+e)/2;
//     if(s>e){
//         cout<<"Absent";
//        return; 
//     }
//     if(arr[mid]==target){
//         cout<<"Present at: "<<mid<<"th index"<<endl;
//         return;
//     }
//     else if(arr[mid]>target){
//         e=mid-1;
//     }
//     else if (arr[mid]<target)
//     {
//         s=mid+1;
//     }
//     binarySearch(arr,n,s,e,target);
// }
// int main(){
//     int arr[7]={10,20,30,40,50,60,70};
//     int n=7;
//     int s=0;
//     int e=n-1;
//     int target=40;
//     binarySearch(arr,n,s,e,target);
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// void binarySearch(vector<int>arr,int s,int e,int target){
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==target){
//         cout<<"Present at:"<<mid;
//         return;
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
        
//     }

// }
// int main(){
//     vector<int>arr={10,20,30,40,50,60,70};
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     int target=80;
//     binarySearch(arr,s,e,target);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void binarySearch(vector<int>arr,int s,int e,int target,int &mid){
//         if(s>e){
//             cout<<"Absent";
//             return;
//         }
//         mid=(s+e)/2;
//         if(arr[mid]==target){
//         cout<<"Present at:"<<mid;
//         return;
//         }
//         else if(arr[mid]<target){
//             s=mid+1;
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         binarySearch(arr,s,e,target,mid);
// }
// int main(){
//     vector<int>arr={10,20,30,40,50,60,70};
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     int target=90;
//     int mid=(s+e)/2;
//     binarySearch(arr,s,e,target,mid);
// }


#include<iostream>
#include<vector>
using namespace std;
void binarySearch(vector<int>&arr,int s,int e,int target){
    if(s>=e){
        cout<<"Absent"<<endl;
        return;
    }
    int mid=(s+e)/2;
    if(arr[mid]==target){
        cout<<"Present at index:"<<mid<<endl;
        return;
    }
    else if(arr[mid]>target){
        e=mid-1;
    }
    else if(arr[mid]<target){
        s=mid+1;
    }
    binarySearch(arr,s,e,target);
}
int main(){
    vector<int>arr={10,20,30,40,50,60};
    int n=arr.size();
    int s=0;
    int e=n-1;
    int target=10;
    binarySearch(arr,s,e,target);
}