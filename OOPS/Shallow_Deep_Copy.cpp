#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;
    abc(int _x,int _y){
        x=_x;
        y=new int(_y);
    }

    //SHALLOW COPY
    // abc(abc const & obj){
    //     x=obj.x;
    //     y=obj.y;
    // }

    //DEEP COPY
    abc(abc const & obj){
        x=obj.x;
        y=new int (*obj.y);
    }
    void print() const{
        cout<<"X: "<<x<<endl<<"*Y: "<<*y<<endl<<"Address of Y: "<<y<<endl<<endl;
    }
};
int main(){
    abc a(3,5);
    a.print();
    abc b=a;
    b.print();
    *b.y=100;
    b.print();
    a.print();

}