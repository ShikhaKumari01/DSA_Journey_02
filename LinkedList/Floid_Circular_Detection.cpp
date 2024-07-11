// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
    
// };
// void findLoop(Node* &head){
//     Node* slow=head;
//     Node* fast=slow;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//             if(fast==slow){
//                 cout<<"Loop Present";
//                 return;
//             }
//         }
//     }
//     cout<<"Loop Absent";
//     return;
// }
// // void print(Node* &head){
// //         while(head!=NULL){
// //             cout<<head->data<<" ";
// //             head=head->next;
// //         }
// // }
// int main(){
//     Node *first=new Node(10);
//     Node *second=new Node(20);
//     Node *third=new Node(30);
//     Node *fourth=new Node(40);
//     Node *fifth=new Node(50);
//     Node *sixth=new Node(60);
//     Node *seventh=new Node(70);
//     Node *eighth=new Node(80);
//     Node *ninth=new Node(90);
//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     sixth->next=seventh;
//     seventh->next=eighth;
//     eighth->next=ninth;
//     ninth->next=fifth;
//     findLoop(first);
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
    
// };
// int findLoop(Node* &head){
//     Node* slow=head;
//     Node* fast=slow;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//                 if(fast==slow){
//                     slow=head;
//                     while(fast!=NULL){
//                         slow=slow->next;
//                         fast=fast->next;
//                         if(fast==slow){
//                             return slow->data;
//                         }
//                     }
//                 }
//             }
//     }
    
// }
// int main(){
//     Node *first=new Node(10);
//     Node *second=new Node(20);
//     Node *third=new Node(30);
//     Node *fourth=new Node(40);
//     Node *fifth=new Node(50);
//     Node *sixth=new Node(60);
//     Node *seventh=new Node(70);
//     Node *eighth=new Node(80);
//     Node *ninth=new Node(90);
//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     sixth->next=seventh;
//     seventh->next=eighth;
//     eighth->next=ninth;
//     ninth->next=fourth;
//     cout<<findLoop(first);
// }



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
void findLoop(Node* head){
    Node* slow=head;
    Node* fast=slow;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
                if(fast==slow){
                    slow=head;
                    Node *prev=fast;
                    while(slow!=fast){
                        prev=fast;
                        slow=slow->next;
                        fast=fast->next;
                        
                    }
                    prev->next=NULL;
                    return;
                }
            }
    }
    
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
    Node *seventh=new Node(70);
    Node *eighth=new Node(80);
    Node *ninth=new Node(90);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fourth;
    // cout<<findLoop(first);
    findLoop(first);
    print(first);
}