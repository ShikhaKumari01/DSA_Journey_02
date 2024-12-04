#include<iostream>
using namespace std;
int clearBit(int n,int i,int j){
    int a=-1<<(i+1);
    int b=(1<<j)-1;
    int mask=a|b;
    int ans=n&mask;
    return ans;
}
int main(){
    cout<<clearBit(15,2,1);
}