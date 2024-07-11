// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void sortZeroOneTwo(Node* &head){
//     int zeroCount=0;
//     int oneCount=0;
//     int twoCount=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             zeroCount++;
//         }
//         else if(temp->data==1){
//             oneCount++;
//         }
//         else if(temp->data==2){
//             twoCount++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
    
//         while(zeroCount--){
//             temp->data=0;
//             temp=temp->next;
//         }
//         while(oneCount--){
//             temp->data=1;
//             temp=temp->next;
//         }
//         while(twoCount--){
//             temp->data=2;
//             temp=temp->next;
//         }
    
    
// }
// void print(Node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// int main(){
//     Node *first=new Node(2);
//     Node *second=new Node(1);
//     Node *third=new Node(1);
//     Node *fourth=new Node(0);
//     Node *fifth=new Node(0);
//     Node *sixth=new Node(1);
//     Node *seventh=new Node(2);
//     Node *eighth=new Node(0);
//     Node *ninth=new Node(1);
//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     sixth->next=seventh;
//     seventh->next=eighth;
//     eighth->next=ninth;
//     sortZeroOneTwo(first);
//     print(first);
// }



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
void sortZeroOneTwo(Node* &head){
    Node* zeroKaHead=new Node(-1);
    Node* oneKaHead=new Node(-1);
    Node* twoKaHead=new Node(-1);
    Node* temp=head;
    while(head!=NULL){
        if(head->data==0){
            zeroKaHead->next->data=0;
        }
        if(head->data==1){
            oneKaHead->next->data=1;
        }
        if(head->data==2){
            zeroKaHead->next->data=2;
        }
        head=head->next;
    }
    
    
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node *first=new Node(2);
    Node *second=new Node(1);
    Node *third=new Node(1);
    Node *fourth=new Node(0);
    Node *fifth=new Node(0);
    Node *sixth=new Node(1);
    Node *seventh=new Node(2);
    Node *eighth=new Node(0);
    Node *ninth=new Node(1);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    print(first);
}