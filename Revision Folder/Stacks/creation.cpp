#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    
    void push(int data){
        if(isFull()){
            cout<<"Stack is full, can't insert element"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty, can't delete element"<<endl;
            return;
        }
        top--;

    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    bool isFull(){
        if(top==size-1){
            return 1;
        }
        return 0;
    }
    int getTop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<"Empty: "<<s.isEmpty()<<endl;
    cout<<"Full: "<<s.isFull()<<endl;
    cout<<"Top element: "<<s.getTop()<<endl;
}