#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int _val):x(_val){};
    int getX() const{
        return x;
    }
    void setX(int _x){
        x=_x;
    }
    friend class B; //----------------------->CLASS
    friend void print(const A &); //----------------------->FUNCTION

};
class B{
    public:
    void print(const A &obj){
        // cout<<obj.getX()<<endl;
        cout<<obj.getX()<<endl;
    }
};
void print(const A &obj){
    cout<<obj.x<<endl;
}
int main(){
    A a(5);
    B b;
    b.print(a);
    print(a);
}