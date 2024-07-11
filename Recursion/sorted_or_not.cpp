// #include<iostream>
// using namespace std;
// bool findSorted(int arr[],int size,int i){
//     bool flag=true;
//     if(i==(size-1)){
//         return true;
//     }
//     if(arr[i+1]<arr[i]){
//         return false;
        
        
//     }
//        return findSorted(arr,size,i+1);

    
// }
// int main(){
//     int size=6;
//     int arr[6]={2,3,4,5,99,109};
    
//     int i=0;
//     bool Sorted=findSorted(arr,size,i);
//     if(Sorted){
//         cout<<"Sorted";
//     }
//     else{
//         cout<<"Not sorted";
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// bool findSorted(vector<int>arr,int size,int i){
//     if(i==(size-1)){
//         return true;
//     }
//     if(arr[i+1]<arr[i]){
//         return false;
        
        
//     }
//        return findSorted(arr,size,i+1);

    
// }
// int main(){
//     vector<int>arr={1,2,3,4,5,6,7};
//     int size=arr.size();
//     int i=0;
//     bool Sorted=findSorted(arr,size,i);
//     if(Sorted){
//         cout<<"Sorted";
//     }
//     else{
//         cout<<"Not sorted";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// bool findSort(vector<int>&arr,int i){
//     int n=arr.size();
//     if(i>n-1){
//         return true;
//     }
//     if(arr[i]>arr[i+1]){
//         return false;
//     }
//     findSort(arr,i+1);
// }
// int main(){
//     vector<int>arr={10,20,30,600,70};
//     int i=0;
//     bool flag=findSort(arr,i);
//     if(flag==true){
//         cout<<"Array is sorted";
//     }
//     else{
//         cout<<"Array is not sorted";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
bool checkSort(vector<int>&arr,int n,int i){
    if(i==(n-1)){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    checkSort(arr,n,i+1);
}
int main(){
    vector<int>arr={1,6,7};
    int n=arr.size();
    int i=0;
    bool flag=checkSort(arr,n,i);
    if(flag==true){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
}