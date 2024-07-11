// #include<iostream>
// using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size){
//         arr=new int[size];
//         this->size=size;
//         this->front=0;
//         this->rear=0;
//     }
//     void push(int data){
//         if(front==0&&rear==size){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         arr[rear]=data;
//         rear++;
//     }
//     void pop(){
//         if(isEmpty()){
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         front++;
//         if(front==rear){
//             front=0;
//             rear=0;
//         }
//     }
//     int getFront(){
//         if(isEmpty()){
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     int getSize(){
//         return rear-front;
//     }
//     bool isEmpty(){
//         if(rear==front){
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     Queue q(5);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(40);
//     cout<<"Size: "<<q.getSize()<<endl;
//     q.pop();
//     // q.pop();
//     // q.pop();
//     // if(q.isEmpty()){
//     //     cout<<"Queue is empty"<<endl;
//     // }
//     // else{
//     //     cout<<"Queue is not empty"<<endl;
//     // }
//     while(!q.isEmpty()){
//         cout<<q.getFront()<<" ";
//         q.pop();
//     }
// }



// #include<iostream>
// using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size){
//         arr=new int[size];
//         this->size=size;
//         this->front=0;
//         this->rear=0;
//     }
//     void push(int data){
//         //full
//         if(front==0&&rear==size){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         //normal
//         arr[rear]=data;
//         rear++;
//     } 
//     void pop(){
//         //empty
//         if(front==rear){
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         //normal
//         front++;
//         if(front==rear){
//             front=0;
//             rear=0;
//         }
//     }
//     int getFront(){
//         if(front==rear){
//             cout<<"Queue is empty"<<endl;
//         }
//         return arr[front];
//     }
//     int getSize(){
//         if(front==rear){
//             cout<<"Queue is empty"<<endl;
//         }
//         return rear-front;
//     }
//     bool isEmpty(){
//         if(rear==front){
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     Queue q(10);
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     q.push(80);
//     q.push(90);
//     q.push(100);
//     q.pop();
//     cout<<"Front element: "<<q.getFront()<<endl;
//     cout<<"Size: "<<q.getSize()<<endl;
//     while(!q.isEmpty()){
//         cout<<q.getFront()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     // cout<<"Size: "<<q.getSize();
// }



#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        this->front=-1;
        this->rear=-1;
    }
    void push(int data){
        if(rear==(size-1)){
            cout<<"Queue is full,can't push"<<endl;
            return;
        }
        if(isEmpty()){
            front=0;
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
           front=-1;
           rear=-1;
           return;
        }
        front++;
    }
    int getFront(){
        if(isEmpty()){
           cout<<"Queue is empty"<<endl;
            return 0; 
        }
        return arr[front];
    }
    int getSize(){
       if(front==-1&&rear==-1){
           return 0; 
        }
        return rear-front+1; 
    }
    bool isEmpty(){
        if(front==-1&&rear==-1) return true;
        return false;
    }
};
int main(){
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(1);
    q.push(2);
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
    cout<<"After pop: "<<endl;
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(5);
    cout<<"Size: "<<q.getSize()<<endl;
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    while(!q.isEmpty()){
        cout<<q.getFront()<<" ";
        q.pop();
    }
    cout<<endl;
    
}