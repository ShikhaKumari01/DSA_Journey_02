// #include<iostream>
// using namespace std;
// void printArray(int arr[],int size,int i){
//     if(i==size){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     printArray(arr,size,++i);
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     // for(int i=0;i<10;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     int size=10;
//     int i=0;
//     printArray(arr,size,i);
// }


#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int>arr,int i){
    int n=arr.size();
    if(i==n){
        return;
    }
    cout<<arr[i]<<" ";
    printArray(arr,i+1);
}
int main(){
    vector<int>arr={1,3,5,7,9,44,59};
    int i=0;
    printArray(arr,i);
}