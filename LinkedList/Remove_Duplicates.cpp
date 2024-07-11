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
Node* removeDuplicates(Node* &head){
    Node* curr=head;
    if(curr==NULL){
        return NULL;
    }
    if(curr->next==NULL){
        return head;
    }
    while(curr!=NULL){
        if((curr->next!=NULL)&&(curr->data==curr->next->data)){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
void print(Node* &head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *first=new Node(10);
    Node *second=new Node(10);
    Node *third=new Node(10);
    Node *fourth=new Node(40);
    Node *fifth=new Node(50);
    Node *sixth=new Node(50);
    Node *seventh=new Node(50);
    Node *eighth=new Node(70);
    Node *ninth=new Node(90);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    //print(first);
    first=removeDuplicates(first);
    print(first);
}