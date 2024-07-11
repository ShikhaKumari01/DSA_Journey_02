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

};
int main(){
    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.size=4;
    for(int i=1;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }

}