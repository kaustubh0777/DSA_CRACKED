#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

struct node
{
    int data;
    node*next;
    node*prev;

    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

node*deletelast(node*head)
{
    if(head->next==NULL)
    {
        return head;
    }
    
    node*p=head;
    //10->20->30->NULL
    while(p->next!=NULL)
    {
      p=p->next;

    }
   p->prev->next=NULL;
   

   delete p;
   return head;
}
void display(node*k)
{
    node*p=k;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
cout<<endl;

}

int main()
{
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);
    node*third=new node(40);

    head->next=first;
    head->prev=NULL;
    
    first->next=second;
    first->prev=head;

    second->next=third;
    second->prev=first;

    third->next=NULL;
    third->prev=second;

    node*k=deletelast(head);
    display(k);

}