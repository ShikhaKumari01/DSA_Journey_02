// #include<iostream>
// using namespace std;
// class Heap{
//     public:
//     int arr[100];
//     int size;
//     Heap(){
//         size=0;
//         arr[size]=-1;
//     }
//     void insertInHeap(int val){

//         size=size+1;
//         int index=size;
//         arr[index]=val;
//         while(index>1){
//             int parentIndex=index/2;
//             if(arr[parentIndex]<arr[index]){
//                 swap(arr[parentIndex],arr[index]);
//                 index=parentIndex;
//             }
//             else{
//                 break;
//             }
//         }   
//     }
//     void deleteANode(){
//         arr[1]=arr[size-1];
//         size--;
//         int index=1;
//         while(index<size){
//             int largest=index;
//             int left=2*index;
//             int right=2*index+1;
//             if(left<size&&arr[left]>arr[largest]){
//                 largest=left;
//             }
//             if(right<size&&arr[right]>arr[largest]){
//                 largest=right;
//             }
//             if(index==largest){
//                 break;
//             }
//             else{
//                 swap(arr[index],arr[largest]);
//                 index=largest;
//             }
//         }
//     }
// };
// int main(){
//     Heap h;
//     h.insertInHeap(50);
//     h.insertInHeap(30);
//     h.insertInHeap(70);
//     h.insertInHeap(40);
//     h.insertInHeap(80);
//     h.insertInHeap(100);
//     h.size=7;
//     for(int i=0;i<h.size;i++){
//         cout<<h.arr[i]<<" ";
//     }
//     cout<<endl;
//     h.deleteANode();
//     for(int i=0;i<h.size;i++){
//         cout<<h.arr[i]<<" ";
//     }
// }



#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
       size=0;
       arr[size] =-1;
    }
    void insert(int data){
        size=size+1;
        int index=size;
        arr[index]=data;
        while(index>1){
            int parentIdx=index/2;
            if(arr[parentIdx]<arr[index]){
                swap(arr[parentIdx],arr[index]);
                index=parentIdx;
            }
            else{
                break;
            }
        }
        
    }
    void deleteNode(){
        int index=1;
        arr[1]=arr[size];
        size=size-1;
        while(index<size){
            int largest=index;
            int left=2*index;
            int right=2*index+1;
            if(left<=size&&arr[left]>arr[largest]){
                largest=left;
            }
            if(right<=size&&arr[right]>arr[largest]){
                largest=right;
            }
            if(index==largest){
                break;
            }
            else{
                swap(arr[index],arr[largest]);
                index=largest;
            }
        }
    }

};
int main(){
    Heap h;
    h.insert(100);
    h.insert(50);
    h.insert(60);
    h.insert(40);
    h.insert(45);
    h.insert(53);
    h.insert(52);
    for(int i=1;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl<<"After deletion: "<<endl;
    h.deleteNode();
    for(int i=1;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
}