#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class info{
    public:
    int data;
    int row;
    int col;
    info(int a,int b,int c){
        this->data=a;
        this->row=b;
        this->col=c;
    }
};
class compare{
    public:
    bool operator()(info* a,info* b){
        return a->data > b->data;
    }
};
vector<int>mergeKSortedArray(int arr[][6],int k,int n){
    priority_queue<info*,vector<info*>,compare>minHeap;
    for(int i=0;i<k;i++){
        info* temp=new info(arr[i][0],i,0);
        minHeap.push(temp);
    }
    vector<int>ans;
    while(!minHeap.empty()){
        info* temp=minHeap.top();
        int topElem=temp->data;
        int topRow=temp->row;
        int topCol=temp->col;
        minHeap.pop();
        ans.push_back(topElem);
        if(topCol+1<n){
            info* temp=new info(arr[topRow][topCol+1],topRow,topCol+1);
            minHeap.push(temp);
        }
    }
    return ans;

}
int main(){
    int arr[][6]={{2,4,6,8,10,12},{3,9,15,18,21,24},{5,20,25,30,35,40}};
    int k=3;
    int n=6;
    vector<int>ans=mergeKSortedArray(arr,k,n);
    for(auto i:ans){
        cout<<i<<" ";
    }
}


// #include<iostream>
// using namespace std;
// int main(){
//     char ch='b';
//     int freq[26];
//     int ans=ch-'a';
//     cout<<ans<<endl;
//     cout<<char(ans+'a');
// }