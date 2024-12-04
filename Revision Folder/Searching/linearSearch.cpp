// #include<iostream>
// using namespace std;
// bool linearSearch(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80,90,100};
//     int n=10;
//     int target=66;
//     bool ans=linearSearch(arr,n,target);
//     if(ans){
//         cout<<"Present";
//     }
//     else{
//         cout<<"Absent";
//     }
// }


#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={20,10,40,60,50};
    int n=5;
    int target;
    cout<<"Enter any number to search: "<<endl;
    cin>>target;
    if(linearSearch(arr,n,target)){
        cout<<"Target present"<<endl;
    }
    else{
        cout<<"Target absent"<<endl;
    }
}