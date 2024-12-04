#include<iostream>
using namespace  std;
int clearIthBit(int n,int i){
    int mask=~(1<<i);
    int ans=n&mask;
    return ans;
}
int updateIthBit(int n,int i,int target){
    int clearedBit=clearIthBit(n,i);
    int mask=target<<i;
    return clearedBit|mask;
}
int main(){
    cout<<updateIthBit(10,1,0);
}