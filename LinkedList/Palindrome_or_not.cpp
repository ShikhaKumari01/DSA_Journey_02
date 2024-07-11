#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool palindrome(Node* &head){
    if(head==NULL){
        return true;
    }
    if(head->next==NULL){
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    //middle mil gya->slow 
    Node* aageKaReverseNode=reverse(slow->next);
    slow->next=aageKaReverseNode;
    Node* temp1=head;
    Node* temp2=slow->next;
    while(temp2!=NULL){
        if(temp1->data==temp2->data){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{
            return false;
        }
    }
    return true;
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
    Node *fourth=new Node(90);
    Node *fifth=new Node(80);
    Node *sixth=new Node(90);
    Node *seventh=new Node(30);
    Node *eighth=new Node(20);
    Node *ninth=new Node(10);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    bool flag=palindrome(first);
    if(flag==true){
        cout<<"LL is a Palindrome"<<endl;
    }
    else{
        cout<<"LL is not a Palindrome"<<endl;
    }
}