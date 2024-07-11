#include<iostream>
using namespace std;
int fastExponent(int a,int b){
    int ans=1;
    while(b>0){
        if(b%2!=0){
            ans=ans*a;
        }
        a=a*a;
        b=b/2;
    }
    return ans;
}
int superFastExponent(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}
int slowExponent(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a=6;
    int b=6;
    cout<<"Slow method: "<<slowExponent(a,b)<<endl;
    cout<<"Fast method: "<<fastExponent(a,b)<<endl;
    cout<<"Super Fast method: "<<superFastExponent(a,b)<<endl;
}