// #include<iostream>
// using namespace std;
// void heapify(int arr[],int n,int i){
//     int index=i;
//     int largest=index;
//     int leftAns=2*index;
//     int rightAns=2*index+1;
//     if(leftAns<=n&&arr[largest]<arr[leftAns]){
//         largest=leftAns;
//     }
//     if(rightAns<=n&&arr[largest]<arr[rightAns]){
//         largest=rightAns;
//     }
//     if(index!=largest){
//         swap(arr[index],arr[largest]);
//         index=largest;
//         heapify(arr,n,index);
//     }
// }
// void buildHeap(int arr[],int n){
//     for(int i=n/2;i>0;i--){
//         heapify(arr,n,i);
//     }
// }
// int main(){
//     int arr[]={-1,12,15,13,11,14};
//     int n=5;
//     buildHeap(arr,n);
//     cout<<"Printing Heap: "<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;
void heapify(int arr[],int size,int i){
    int index=i;
    int largest=index;
    int left=2*index;
    int right=2*index+1;
    if(left<=size&&arr[left]>arr[largest]){
            largest=left;
    }
    if(right<=size&&arr[right]>arr[largest]){
            largest=right;
    }
    if(index!=largest){
            swap(arr[index],arr[largest]);
            index=largest;
            heapify(arr,size,index);
    }
}
void builtTree(int arr[],int size){
    int n=size;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
int main(){
    int arr[]={-1,12,14,13,17,15};
    int size=6;
    builtTree(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}