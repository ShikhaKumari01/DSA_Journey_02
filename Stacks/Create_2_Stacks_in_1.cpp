// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;
//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         this->top1=-1;
//         this->top2=size;
//     }
//     void push1(int data){
//         if(top2-top1==1){
//             cout<<"Stack1 full"<<endl;
//             return;
//         }
//         top1++;
//         arr[top1]=data;
//     }
//     void pop1(){
//         if(top1==-1){
//             cout<<"Stack1 is empty"<<endl;
//             return;
//         }
//         top1--;
//     }
//     void push2(int data){
//         if(top2-top1==1){
//             cout<<"Stack2 is full"<<endl;
//             return;
//         }
//         top2--;
//         arr[top2]=data;
//     }
//     void pop2(){
//         if(top2==size){
//             cout<<"Stack2 is empty"<<endl;
//             return;
//         }
//         top2++;
//     }
//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };
// int main(){
//     Stack s(10);
//     s.push1(10);
//     s.push1(2);
//     s.push1(1);
//     s.push1(2);
//     s.push2(99);
//     s.push1(2);
//     s.push2(3);
//     s.push2(30);
//     s.print();
// }



#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top1;
    int top2;
    int *arr;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        this->top1=-1;
        this->top2=size;
    }
    void push1(int data){
        if(top2-top1==1){
            cout<<"Stack 1 overflow"<<endl;
            return;
        }
        top1++;
        arr[top1]=data;
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack 1 underflow"<<endl;
            return;
        }
        top1--;
    }

    void push2(int data){
        if(top2-top1==1){
            cout<<"Stack 2 overflow"<<endl;
            return;
        }
        top2--;
        arr[top2]=data;
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack 2 underflow"<<endl;
            return;
        }
        top2++;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Stack s(10);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    s.push2(60);
    s.push1(70);
    s.push2(80);
    s.push1(90);
    s.push2(100);
    
    s.print();
    //10 30 50 70 0 0 80 60 40 20 
}