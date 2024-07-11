#include<iostream>
#include<queue>
using namespace std;
void callMedian(double &median,priority_queue<int>&maxHeap,priority_queue<int,vector<int>,greater<int>>&minHeap,int element){
    if(maxHeap.size()==minHeap.size()){
        if(element>median){
            minHeap.push(element);
            median=minHeap.top();
        }
        else{
            //element>median
            maxHeap.push(element);
            median=maxHeap.top();
        }
    }
    else if(maxHeap.size()>minHeap.size()){
        if(element>median){
            minHeap.push(element);
            median=(maxHeap.top()+minHeap.top())/2.0;
        }
        else{
            //element>median
            int maxTop=maxHeap.top();
            maxHeap.pop();
            minHeap.push(maxTop);
            maxHeap.push(element);
            median=(maxHeap.top()+minHeap.top())/2.0;
        }
    }
    else if(maxHeap.size()<minHeap.size()){
        if(element>median){
            int minTop=minHeap.top();
            minHeap.pop();
            maxHeap.push(minTop);
            minHeap.push(element);
            median=(maxHeap.top()+minHeap.top())/2.0;
        }
        else{
            //element>median
            maxHeap.push(element);
            median=(maxHeap.top()+minHeap.top())/2.0;
        }
    }
}
int main(){
    int arr[12]={5,15,1,3,2,8,7,9,10,6,11,4};
    int n=12;
    double median=0;
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<n;i++){
        int element=arr[i];
        callMedian(median,maxHeap,minHeap,element);
        cout<<arr[i]<<" -> "<<median<<endl;
    }
}