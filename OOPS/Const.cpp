#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;
    mutable int z;
    public:
    abc(){
        this->x=0;
        y=new int (0);
    }
    // abc(int _x,int _y,int _z=0){
    //     this->x=_x;
    //     y=new int (_y);
    //     z=_z;
    // }

    //initialisation list
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){
        cout<<"I am in init list"<<endl;
    };

    int getX() const{
        return x;
    }
    void setX(int val1){
        x=val1;
    }
    int getY() const{
        return *y;
    }
    void setY(int val2){
        *y=val2;
    }
    int getZ() const{
        return z;
    }
};
void printABC(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}
int main(){
    // const int x=5;
    // cout<<x<<endl;

    //const data but non-const pointer
    // const int* a=new int(7);
    // int const* a=new int(7);
    // cout<<*a<<endl;
    // int b=29;
    // a=&b;
    // cout<<*a<<endl;

    //const pointer but non-const data
    // int *const a=new int (9);
    // cout<<*a<<endl;
    // *a=89;
    // cout<<*a<<endl;
    // int b=90;
    // a=&b;
    // cout<<*a<<endl;

    //data const,pointer const
    // const int *const a=new int (80);
    // cout<<*a<<endl;
    // // *a=79;
    // // int b=90;
    // // a=&b;
    // // cout<<*a<<endl;

    abc a(3,5,8);
    printABC(a);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;

}