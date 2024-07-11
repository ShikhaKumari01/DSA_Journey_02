// #include<iostream>
// #include<vector>
// using namespace std;
// void mergeArray(vector<int>&arr1,vector<int>&arr2,vector<int>&ans,int i,int j){
//     if(i==arr1.size()&&j==arr2.size()){
//         return;
//     }
//     if(arr1[i]<arr2[j]){
//         ans.push_back(arr1[i]);
//         i=i+1;
//     }
//     if(arr1[i]>arr2[j]){
//         ans.push_back(arr2[j]);
//         j=j+1;
//     }
//     mergeArray(arr1,arr2,ans,i,j);
// }
// int main(){
//     vector<int>arr1={2,4,6};
//     vector<int>arr2={3,5,7,9,11};
//     vector<int>ans;
//     int i=0,j=0;
//     mergeArray(arr1,arr2,ans,i,j);
//     for(int k=0;k<ans.size();k++){
//         cout<<ans[k]<<" ";
//     }
// }



#include<iostream>
#include<vector>
using namespace std;
void solve( vector<int>&arr1, vector<int>&arr2, vector<int>&arr,int i, int j){
    if(i==arr1.size()&&j==arr2.size()){
        return;
    }
    if(arr1[i]<arr2[j]){
        arr.push_back(arr1[i]);
        i++;
    }
    if(arr1[i]>arr2[j]){
        arr.push_back(arr2[j]);
        j++;
    }
    solve(arr1,arr2,arr,i,j);
}
int main(){
    vector<int>arr1={2,4,6};
    vector<int>arr2={3,5,7,9,11};
    vector<int>arr;
    int i=0;
    int j=0;
    solve(arr1,arr2,arr,i,j);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}