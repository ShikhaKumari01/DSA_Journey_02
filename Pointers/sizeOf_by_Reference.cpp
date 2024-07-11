// #include<iostream>
// using namespace std;
// void solve(int arr[]){
//     cout<<sizeof(arr);
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8};
//     cout<<sizeof(arr)<<endl;
//     solve(arr);
// }



#include<iostream>
using namespace std;
void solve(int arr[]){
    cout<<"Size in solve function:"<<sizeof(arr)<<endl;
    arr[2]=99;
    cout<<"arr:"<<arr<<endl;
    cout<<"&arr:"<<&arr<<endl;
}
int main(){
    int arr[10]={1,2,3,4,5,6};
    cout<<"Size in main function:"<<sizeof(arr)<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"arr:"<<arr<<endl;
    cout<<"&arr:"<<&arr<<endl;
    cout<<endl;
    solve(arr);
    cout<<endl<<"Solve function se aane ke baad:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}