#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data=val;
        next= NULL;

    }
};
void insert_at_head(node* &head, int val)
{
    node* n = new node(val); 
     
    if(head == NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void insert_at_end(node* &head , int val)
{
    //new node
    node* n = new node(val); 
     
    if(head == NULL)
    {
        head=n;
        return;
    }
   node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next= n;
  
  

}
void delete_at_head(node * &head)
{
    node *y=head;
    head=head->next;

    delete y;
}
void delete_node(node* &head, int val)
{
    if(head == NULL)
    return ;

    if(head->next ==NULL)
    {
        delete_at_head(head);
    }
    node * t=head;
    while(t->next->data != val)
    {
        t=t->next;
    }
    node *k=t->next;
    t->next=t->next->next;
    delete(k);
}

node* reverse(node* &head)
{
    node *p=NULL;
    node *c=head;
    node *n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;

}
bool search(node *head, int key)
{
    node* t=head;
    while(t)
    {
        if(t->data == key)
       { 
        return true;
        }
        t=t->next;
    }
return false;
}

void display(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
       cout<<p->data<<"->";
       p=p->next; 
    }
    cout<<"NULL";
}

int main()
{    
    node* head=NULL;
   // insert_at_end(head, 50);
      insert_at_end(head, 60);
        insert_at_end(head, 70);
        insert_at_end(head, 50);
      insert_at_head(head, 100);
        insert_at_head(head, 160);

     //  cout<< search(head,0);

   //  delete_node(head,50);
   //  delete_node(head,70);
  //   delete_at_head(head);
            display(head);


           node* newhead= reverse(head);
           cout<<endl;
            display(newhead);
    return 0;
}