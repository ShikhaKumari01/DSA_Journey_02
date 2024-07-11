#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,5,9,4,5,6};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // int *p=arr;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)+1<<endl;
    // cout<<arr[2]<<endl;
    // cout<<2[arr]<<endl;
    int *p=arr;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;
}