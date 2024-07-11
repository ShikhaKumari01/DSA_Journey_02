// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int pivotElement=arr[s];
//     int pivotIndex=s;
//     int count=0;
//     for(int i=s+1;i<=e;i++){
//         if(pivotElement>arr[i]){
//             count++;
//         }
//     }
//     swap(arr[pivotIndex],arr[s+count]);
//     pivotIndex=s+count;
//     int i=s;
//     int j=e;
//     while(i<pivotIndex&&j>pivotIndex){
//         while(arr[i]<arr[pivotIndex]){
//             i++;
//         }
//         while(arr[j]>arr[pivotIndex]){
//             j--;
//         }
//         if(i<pivotIndex&&j>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p=partition(arr,s,e);
//     quickSort(arr,s,p-1);
//     quickSort(arr,p+1,e);
    
// }
// int main(){
//     int arr[12]={8,1,3,4,20,50,30,3,7,9,0,5};
//     int n=12;
//     int s=0;
//     int e=n-1;
//     quickSort(arr,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<iostream>
// using namespace std;
// int findPivot(int arr[],int s,int e){
//     int pivotIndex=s;
//     int pivotElem=arr[s];
//     int count=0;
//     for(int i=s+1;i<e;i++){
//         if(arr[pivotIndex]>arr[i]){
//             count++;
//         }
//     }
//     swap(arr[pivotIndex],arr[s+count]);
//     pivotIndex=s+count;
//     int i=s;
//     int j=e;
//     while(i<pivotIndex&&i>pivotIndex){
//         while(arr[i]<arr[pivotIndex]){
//             i++;
//         }
//         while(arr[j]>arr[pivotIndex]){
//             j--;
//         }
//         if(i<pivotIndex&&i>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[],int s,int e){
//     if(s>=e) return;
//     int p=findPivot(arr,s,e);
//     //left
//     quickSort(arr,s,p-1);
//     //right
//     quickSort(arr,p+1,e);
// }
// int main(){
//     int arr[7]={8,3,4,1,20,50,30};
//     int n=7;
//     int s=0;
//     int e=n-1;
//     quickSort(arr,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include<iostream>
using namespace std;
int findPivot(int arr[],int s,int e){
    int pivotIndex=s;
    int pivotElement=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivotElement){
            count++;
        }
    }
    swap(arr[pivotIndex],arr[s+count]);
    pivotIndex=s+count;
    int i=s;
    int j=e;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<arr[pivotIndex]){
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e) return;
    int p=findPivot(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[]={8,3,4,1,20,50,30};
    int n=7;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}