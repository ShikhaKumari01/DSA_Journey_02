#include<iostream>
using namespace std;
int x=10;
int main(){
    x=80;
    cout<<x<<endl;
    {   
        int x=9;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
}