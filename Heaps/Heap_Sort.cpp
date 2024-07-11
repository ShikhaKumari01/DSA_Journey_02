// #include<iostream>
// using namespace std;
// void heapify(int arr[],int n,int i){
//     int index=i;
//     int largest=index;
//     int leftAns=2*index+1;
//     int rightAns=2*index+2;
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
//     for(int i=n/2-1;i>0;i--){
//         heapify(arr,n,i);
//     }
// }
// void heapSort(int arr[],int n){
//     while(n!=0){
//         swap(arr[0],arr[n]);
//         n--;
//         heapify(arr,n,0);
//     }
    
// }
// int main(){
//     int arr[]={5,1,1,2,0,0};
//     int n=5;
//     buildHeap(arr,n);
//     cout<<"Printing Heap: "<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
//     heapSort(arr,n);
//     cout<<endl<<"Printing Heap: "<<endl;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include<iostream>
using namespace std;
void heapify(int arr[],int size,int i){
    int index=i;
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
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
void buildHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
void heapSort(int arr[],int n){
    while(n!=0){
        swap(arr[0],arr[n]);
        n--;
        heapify(arr,n,0);
    }
}
int main(){
    int arr[]={5,1,1,2,0,0};
    int n=5;
    buildHeap(arr,n);
    cout<<"Printing Heap: "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    heapSort(arr,n);
    cout<<endl<<"Printing Heap: "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}