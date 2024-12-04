#include<iostream>
using namespace std;
int setIthBit(int n,int i){
    int mask=1<<i;
    int ans=n|mask;
    return ans;
}
int clearIthBit(int n,int i){
    int mask=~(1<<i);
    int ans=n&mask;
    return ans;
}
int main(){
    int ans1=setIthBit(10,2);
    cout<<ans1<<endl;
    int ans2=clearIthBit(10,1);
    cout<<ans2<<endl;
}

