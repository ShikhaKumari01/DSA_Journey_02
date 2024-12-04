#include<iostream>
using namespace std;
int clearLastBits(int n,int i){
    int mask=-1<<i;
    int ans=n&mask;
    return ans;
}
int main(){
    cout<<clearLastBits(7,2);
}