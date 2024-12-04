#include<iostream>
using namespace std;
int getIthBit(int n,int i){
    int mask=1<<i;
    int ans=n&mask;
    if(ans==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int ans=getIthBit(10,3);
    cout<<ans;
}