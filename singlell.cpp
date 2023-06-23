#include<iostream>
using namespace std;
class node{
    public:
    int data;
    int *adresss;
    node(int data){
        this->data = data;
        this->adresss = NULL;
    }
    ~node(){
        int value = this->data;
        delete this->adresss;
        this->adresss = NULL;

    }
 void insertAthead (node* &head,int data) {
    node*node2 = new node(data);
    node2->adresss = head;
     head = node2;

    
 }  
 void insertAttail(node* &tail,int data){
    node *node3 = new node(data);
    tail->next = node3;
    node3 = tail;

 }
 void insertAtmiddle(node* &head,int position.int data){
    node*temp = head;
    if (position == 1){
        insertAthead(head,data);


    };
    int c = 1;
    while(c<position-1){
        temp = temp->next;
        c++;
    };
    node*node4 = new node(data);
    temp->next = node4->next;
    temp->next = node4;

 }
 void printlinklist(node* &head){
    node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data;
        cout<<temp->adresss;
        temp = temp->adresss;

    }
 }
 void deletenode(int position,node* &head){
    if (position = 1){
      node* temp = head;
      head = head->adresss
      delete temp;
    };
    int c = 1;
     node*prev = NULL;
        node*curr = head;
    while(c<position){
       
        prev = curr;
        curr = curr->adresss;
        c++;
    };
    prev->adresss = curr->adresss;
    curr->adresss = NULL;
    delete curr;

 }
 

};

int main(){
    node*node1 = new node(10);
    cout<<node1->data;
    cout<<node1->adresss;

    node *head= node2;
    node*tail = node2;
    printlinklist(head);
    insertAthead(head,11);
    printlinklist(head);
    insertAttail(tail,90);
    printlinklist(head);




return 0;
}