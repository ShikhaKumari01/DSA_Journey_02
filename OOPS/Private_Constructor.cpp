// #include<iostream>
// using namespace std;
// class Box{
//     int a;
//     public:
//     Box(int val):a(val){};
//     int getA(){
//         return a;
//     }
//     void setA(int val){
//         a=val;
//     }
// };
// int main(){
//     Box a(10);
//     cout<<a.getA();
// }


#include<iostream>
using namespace std;
class Box{
    int a;
    Box(int val):a(val){};
    public:
    int getA(){
        return a;
    }
    void setA(int val){
        a=val;
    }
    friend class BoxFactory;
};
class BoxFactory{
    public:
    Box getABox(int w){
        return Box(w);
    }
};
int main(){
    BoxFactory bFact;
    Box b=bFact.getABox(10);
    cout<<b.getA();
}