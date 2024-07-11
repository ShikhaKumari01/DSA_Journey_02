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
int getlen(Node* head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}
int findMiddle(Node* &head,int position){
    int i=1;
    while(i<position){
        head=head->next;
        i=i+1;
    }
    return head->data;
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
    fifth->next=sixth;
    // print(first);
    int length=getlen(first);
    int position=length/2;
    if(length%2==0){
        cout<<findMiddle(first,position);
    }
    else{
        cout<<findMiddle(first,position+1);
    }
}