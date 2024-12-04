#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b){
    double ratio1=((1.0)*a.first)/a.second;
    double ratio2=((1.0)*b.first)/b.second;
    return ratio1>ratio2;
}
int main(){
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int capacity=50;
    int n=3;
    vector<pair<int,int>>data;
    for(int i=0;i<n;i++){
        data.push_back({val[i],wt[i]});
    }
    sort(data.begin(),data.end(),cmp);

    int totalVal=0;
   for(int i=0;i<n;i++){
        pair<int,int>item=data[i];
        int itemVal=item.first;
        int itemWt=item.second;
        if(itemWt<=capacity){
            totalVal+=itemVal;
            capacity-=itemWt;
        }
        else{
            int ratio=((1.0)*itemVal)/itemWt;
            int valueToAdd=ratio*capacity;
            totalVal+=valueToAdd;
            capacity=0;
        }
   }
   cout<<totalVal;
}