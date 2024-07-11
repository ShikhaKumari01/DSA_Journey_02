#include<iostream>
using namespace std;
class Param{
    public:
    int val;
    void operator + (Param &obj2){
        int value1=this->val;
        int value2=obj2.val;
        cout<<"Sum: "<<value1+value2;
    }
};

int main(){
    Param obj1;
    Param obj2;
    obj1.val=9;
    obj2.val=10;
    obj1+obj2;
}