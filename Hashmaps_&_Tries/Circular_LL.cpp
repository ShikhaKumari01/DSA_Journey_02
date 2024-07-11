#include<iostream>
#include<unordered_map>
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
bool CircularOrNot(Node* &head){
  unordered_map<Node*,bool>vis;
  Node* temp=head;
  while(temp!=NULL)  {
    if(vis.find(temp)!=vis.end()){
        return true;
    }
    else{
       pair<Node*,bool>p=make_pair(temp,true);
        vis.insert(p); 
    }
    temp=temp->next;
  }
  return false;
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
    sixth->next=first;
    bool flag=CircularOrNot(first);
    if(flag==true){
        cout<<"Circular";
    }
    else{
        cout<<"Not circular";
    }
}