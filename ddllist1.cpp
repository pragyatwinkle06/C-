//double linked list 
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* prev;
    int data;
    node* next;

    node(int val)
    {
        data =val;
        next=NULL;
        prev=NULL;
    }

};
void insert_head(node* &head,int val)
{
    node* n=new node(val);
     n->next=head;
  if(head !=NULL)
  {
 head->prev=n;
  }
   
   
    head=n;
}
void insert_end(node* &head,int val)
{

    if(head == NULL)
    {
        insert_head(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    n->next=NULL;

}
void delete_first(node * &head)
{
    node *temp=head;
head=head->next;
head->prev=NULL;
    delete temp;
}
void delete_node(node* &head, int pos)
{
node* temp=head;
int count=1;
   
    if(pos==1)
    {
        delete_first(head);
        return ;
    }
    
    while(temp!= NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;


    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    delete(temp);
}
void display(node *head)
{
    node* temp=head;
    while(temp!= NULL)
    {
      cout<<temp->data<<" ";  
      temp=temp->next;
    }
    cout<<endl;
}
int main()
{
node * head=NULL;
insert_end(head,4);
insert_end(head,2);
insert_end(head,8);
insert_end(head,9);
insert_head(head,7);
insert_head(head,22);

display(head);

delete_node(head,1);
delete_node(head,3);
display(head);
return 0;
}