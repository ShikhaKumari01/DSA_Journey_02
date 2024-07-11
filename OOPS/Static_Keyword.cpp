// #include<iostream>
// using namespace std;
// class A{
//     public:
//     static int x,y;
//     void print(){
//         cout<<x<<" "<<y<<endl;
//     }
// };
// int main(){
//     A a={1,4};
//     A b={2,6};
//     a.print();
//     b.print();
// }



#include<iostream>
using namespace std;
class A{
    public:
    static int x,y;
    static void print(){
        cout<<x<<" "<<y<<endl;
    }
};
int A::x;
int A::y;
int main(){
    // A a;
    // a.x=11;
    // a.y=62;
    // a.print();
    // A b;
    // b.x=10;
    // b.y=19;
    // b.print();
    // a.print();


    A a;
    A::x=11;
    A::y=62;
    A::print();
    A b;
    A::x=10;
    A::y=19;
    A::print();
    A::print();
}
