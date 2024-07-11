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
Node *reverseKGroups(Node* &head,int k){
    if(head==NULL) return NULL;
    int len=getlen(head);
    if(k>len){
       return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=reverseKGroups(forward,k);
    }
    return prev;
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
    first=reverseKGroups(first,4);
    print(first);
}