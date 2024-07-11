// #include<iostream>
// using namespace std;
// class cirQueue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     cirQueue(int size){
//         arr=new int[size];
//         this->size=size;
//         this->front=-1;
//         this->rear=-1;
//     }
//     void push(int data){
//         if(front==-1&&rear==-1){
//             front=0;
//             rear=0;
//             arr[rear]=data;
//             return;
//         }
//         if(front==0&&rear==size-1){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         if(front-rear==1){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         if(rear==size-1&&front!=0){
//             rear=0;
//             arr[rear]=data;
//             return;
//         }
//         rear++;
//         arr[rear]=data;
//     }
//     void pop(){
//         if(front==-1&&rear==-1){
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         if(front==rear){
//             front=-1;
//             rear=-1;
//             return;
//         }
//         if(front==size-1){
//             front=0;
//         }
//         front++;
//     }
    
// };
// int main(){
//     cirQueue q(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
//     q.push(10);
// }


#include<iostream>
using namespace std;
class cirQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    cirQueue(int size){
        arr=new int[size];
        this->size=size;
        this->front=-1;
        this->rear=-1;
    }
    void push(int data){
        if(front==0&&rear==(size-1)){
            cout<<"Queue is full,can't push"<<endl;
            return;
        }
        if(isEmpty()){
            front=0;
            rear=0;
            arr[rear]=data;
            return;
        }
        if(front-rear==1){
            // cout<<"Queue is full,can't push"<<endl;
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
    void pop(){
        if(isEmpty()){
           cout<<"Queue is empty,can't pop"<<endl;
            return; 
        }
        if(front==rear&&front!=-1){
            arr[front]=0;
           front=-1;
           rear=-1;
           return;
        }
        if(front==size-1){
            arr[front]=0;
            front=0;
            return;
        }
        arr[front]=0;
        front++;
    }
    bool isEmpty(){
        if(front==-1&&rear==-1) return true;
        return false;
    }
    void print(){
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    }
};
int main(){
    cirQueue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.pop();
    q.pop();
    q.push(110);
    q.push(120);
    q.push(130);
    q.push(140);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
}