#include<iostream>
using namespace std;
class Maths{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    Maths sum1;
    cout<<sum1.sum(3,6)<<endl;
    cout<<sum1.sum(3,6,1)<<endl;
}