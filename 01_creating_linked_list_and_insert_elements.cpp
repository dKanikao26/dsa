#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void Insert_At_Tail(node* &head,int val)
{


    node* n = new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

void Insert_At_Head(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
node* reverse(node*head){
    node*prev =NULL;
    node*curr = head;
    node*forward =NULL;
    while(curr->next!=NULL){
        forward =curr->next ;
        curr->next = prev;
        prev =curr;
        curr= forward;




    }

    return prev;
}

void display(node* head)
{
    int n;

    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        n=n+1;

    }
    cout<<endl;
    cout<<n;
}
node*floyd(node*head){
    if(head == NULL){
        return false;
    }
    node*slow = head;
    node*fast = head;
    while(slow!=NULL &&fast =!NULL){
         fast = fast->next;
    if(fast !=NULL){
        fast = fast->next;

    }
    slow = slow->next;
    if(slow== fast){
        return 1;
    }
}
return false;
node* findstart(node*head){
    if(head ==NULL){
        return NULL;
    }
    node *intersec= node*floyd(head);
    node*slow = head;
    while(slow!=intersec){
        slow = slow->next;
        intersec = intersec->next;



    }
    return slow;
    
}
node * removeloop(node*head){
    node*start =  node*findstart(head);
    node*temp = start;
    while(temp != start){
        temp = temp->next;
    }
    temp -> next = NULL;

}
node*removeduplicate(node*head){
    if (head  == NULL){
        return NULL;
    }
    node*curr = head;

    while(curr!=NULL ){
        node*temp = curr->next->next;
        if(curr == temp){
            delete (curr->next);
            curr->next = temp;


        }
        else{
            curr = curr->next;
        }
    }
}
node*removeunsort(node*head){
    node *curr =head;
    
    while(curr!=NULL){
        node*temp = curr->next;
        while(temp!=NULL){
            if(temp ==curr){
                node*nodetoreplace = temp->next->next;
                delete(temp->next);
                temp->next = nodetoreplace;

            }
            else{
                temp = temp->next;
            }


        }
        curr= curr->next;
        
    }

}
    
   
}

int32_t main()
{
    node* head=NULL; 
    Insert_At_Tail(head,1);
    Insert_At_Tail(head,2);
    display(head);
    Insert_At_Head(head,5);
    display(head);
  
    
    return 0;
}