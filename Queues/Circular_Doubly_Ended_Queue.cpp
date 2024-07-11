#include<iostream>
using namespace std;
class circularDeque{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    circularDeque(int size){
        arr=new int[size];
        this->size=size;
        this->front=-1;
        this->rear=-1;
    }
    void pushRear(int data){
        if(front==-1&&rear==-1){
            front=0;
            rear=0;
            arr[rear]=data;
            return;
        }
        if(front==0&&rear==size-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front-rear==1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(rear==size-1&&front!=0){
            rear=0;
            arr[rear]=data;
            return;
        }
        rear++;
        arr[rear]=data;
    }
    void pushFront(int data){
        if(front==-1&&rear==-1){
            front=0;
            rear=0;
            arr[front]=data;
            return;
        }
        if(front==0&&rear==size-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front-rear==1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==0 &&rear!=size-1){
            front=size-1;
            arr[front]=data;
            return;
        }
        front--;
        arr[front]=data;
    }
    void popRear(){
        if(front==-1&&rear==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(front==rear){
            front=-1;
            rear=-1;
            return;
        }
        if(rear==0){
            rear=size-1;
        }
        rear--;
    }
    void popFront(){
        if(front==-1&&rear==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(front==rear){
            front=-1;
            rear=-1;
            return;
        }
        if(front==size-1){
            front=0;
        }
        front++;
    }
};
int main(){
    circularDeque q(10);
    
}
