#include<iostream>
using namespace std;
#define PI 3.14
#define MAXX(x,y) ((x>y)?x:y)
float findArea(float r){
    return PI*r*r;
}
int main(){
    int a=90;
    int b=7;
    cout<<MAXX(a,b)<<endl;
    cout<<findArea(67.89);
}