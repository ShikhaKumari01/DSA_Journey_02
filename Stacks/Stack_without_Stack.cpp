// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int* arr;
//     int size;
//     int top;
//     Stack(int size){
//         arr=new int[size];
//         this->size=size;
//         this->top=-1;
//     }
//     void push(int data){
//         if(isFull()){
//             cout<<"Stack overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=data;
//     }
//     void pop(){
//         if(isEmpty()){
//             cout<<"Stack underflow"<<endl;
//             return;
//         }
//         top--;
//     }
//     int getTop(){
//         if(isEmpty){
//             cout<<"Stack is Empty"<<endl;
//         }
//         return arr[top];
//     }
//     int getSize(){
//         return top+1;
//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//     bool isFull(){
//         if(top==(size-1)){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//     Stack s(10);
//     if(s.isEmpty()){
//         cout<<"Stack is Empty"<<endl;
//     }
//     else{
//         cout<<"Stack is not Empty"<<endl;
//     }
//     s.push(13);
//     s.push(10);
//     s.push(18);
//     s.push(14);
//     s.push(12);
//     s.push(11);
//     s.push(111);
//     s.push(99);
//     s.pop();
//     cout<<"Size of Stack: "<<s.getSize()<<endl;
//     cout<<"Top element of Stack: "<<s.getTop()<<endl;
//     while(!s.isEmpty()){
//         cout<<s.getTop()<<" ";
//         s.pop();
//     }
// }


#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *arr;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        this->top=-1;
    }
    void push(int data){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
    }
    int getSize(){
        return top+1;
    }
    int getTop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(60);
    cout<<"Size of stack: "<<s.getSize()<<endl;
    s.pop();
    cout<<"Element on top: "<<s.getTop()<<endl;//50
    // cout<<"Size of stack: "<<s.getSize()<<endl;//5
    if(s.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    s.pop();
}