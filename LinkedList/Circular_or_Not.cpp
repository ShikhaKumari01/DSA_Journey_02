#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};
void CircularOrNot(Node* &head){
    Node* temp=head;
    while(head!=NULL){
        head=head->next;
        if(temp==head){
            cout<<"Circular LL "<<endl;
            return;
        }
    }
    cout<<"Not a Circular LL "<<endl;
    return;
}
void print(Node* &head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
}
int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    Node *fifth=new Node(50);
    Node *sixth=new Node(60);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=first;
    CircularOrNot(first);
}