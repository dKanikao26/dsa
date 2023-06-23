#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node* prev;
 node(int data){
    this->data= data;
    this->next=NULL;
    this->prev = NULL;
    this->prev = NULL;

 } 
 


};
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 } ;

 void InsertAtHead(node* &head,int d){
    node* node2 = new node(d);
    node*temp = node2;
    temp->next = head;
    head->prev = temp;
    head = temp;


 };
 void InsertAttail(node* &tail,int d){
    node* node3 = new node(d);
    node* temp = node3;
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
 };
 void InsertAtposition(node* &head, node* &tail,int position,int d){
    
    if(position ==1){
        InsertAtHead(head,d);
    }
    int c= 1;

    node*temp = head;
    while(c<position-1){
      
        temp = temp->next;
        c++;
    }

if(temp->next == NULL){
    InsertAttail(tail,d);
}
node* node4 = new node(d);
node4->next = temp->next;
node4->prev= temp;
temp->next->prev= node4;
temp->next = node4;





 };
int main(){
    node* node1 = new node(10);
    node*head = node1;
    node*tail = node1;
    print(head);
    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtHead(head,13);
    InsertAttail(tail,14);
    InsertAtposition(head,tail,3,100);

    print(head);

return 0;
}